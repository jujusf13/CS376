
Describe what you did, how you did it, what challenges you encountered, and how you solved them. 
- I worked with memory allocation, pointers, and data structures. I think an issue I would've had was allocating and deallocating memory. Because I did not have the tools I needed to do so (valgrind to check
for memory loss), I was unable to check for memory leaks.

Please answer any questions found throughout the narrative of this assignment.
Then, modify the program such that it increases in size by a factor of 2 times the previous size. Time it again. What do you observe?
- I noticed that is is slightly faster. Because we are multiplying the size by 2, the number of operations in that case is done quite less. When we just add 1 to the size each time, that is 10000 operations we must do.

If collaboration with a buddy was permitted, did you work with a buddy on this assignment? If so, who? If not, do you certify that this submission represents your own original work?
- I worked with Pat McManus for a little bit but we did not do much together. Just some problem solving when it came to the swap method.

Please identify any and all portions of your submission that were not originally written by you (for example, code originally written by your buddy, or anything taken or adapted from a non-classroom resource). It is always OK to use your textbook and instructor notes; however, you are certifying that any portions not designated as coming from an outside person or source are your own original work.
- I did not create the bubble sort. I did not create 3 methods within the problem4.c. These were searchNode, addToEnd, and searchNode. I figure these were not the meat of the assignment and jsut helped me set up the linkedList. Otherwise, creating the linkedList was all my doing.

Approximately how many hours it took you to finish this assignment (I will not judge you for this at all...I am simply using it to gauge if the assignments are too easy or hard)?
- Probably 5-7 hours. Rough estimate.

Your overall impression of the assignment. Did you love it, hate it, or were you neutral? One word answers are fine, but if you have any suggestions for the future let me know.
- I found the sort for problem 4 to be annoying. I either misunderstood the instructions or I don't think we went over sorting enough. I tried combining my bubble sort with the linkedList but had a lot of trouble.

Using the grading specifications on this page, discuss briefly the grade you would give yourself and why. Discuss each item in the grading specification.
- Probably an A-. I did everything well except the sort of the linkedList. The swap method was probably the most difficult part but I just got burnt out towards the end of the assignment and just am okay with losing some points here.

Any other concerns that you have. For instance, if you have a bug that you were unable to solve but you made progress, write that here. The more you articulate the problem the more partial credit you will receive (it is fine to leave this blank).
- Everything is all good except for the LinkedList sort. 
- Probably had some memory leaks but you said that was fine because my enviornment was not set up to check for leaks in valgrind.
- SortLinkedList method only kind of works. I was not sure how to implement bubble sort so I just swapped nodes that were next to each other. If the value of one was greater than the other they switched places. Then I traversed the LinkedList after checking each conditional.
- This is not a bug but with the linked list I used chars and not ints. It works fine though because of ascii values and how if a B is after an A, they will swap (I know it seems backwards but the main concept works still).