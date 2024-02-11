#!/bin/bash
previous_cpu_usage=0
threshold=10

while true; do
	current_cpu_usage=$(top -l 1 -n 0 | awk '/CPU usage/ {user+=$3; 
	sys+=$5} END {print (user+sys)/2}' | sed 's/%//g')
	if [ $(echo "$current_cpu_usage > $previous_cpu_usage + $threshold" | bc) -eq 1 ]; then
    		echo "Warning: Average CPU usage increased by more than $threshold% in the last minute!"
	else
		echo "Average CPU Usage of ${current_cpu_usage} is below the threshold"
	fi

	previous_cpu_usage=$current_cpu_usage
	sleep 10
done

