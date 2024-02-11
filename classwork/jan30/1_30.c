#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    // struct: array where each element is different (heterogeneous array)
    char name[25]; //char = 1 byte (25 total here)
    int age; //int = 4 bytes
    double salary; //double = 8 bytes
};

struct Person2 {
    char* name; //char = 4 bytes (because it is an address and that is 
                //the minimum number of bytes needed for an address)
                //We can later malloc this to adjust for the same of the 
                //name we want to give it
    int age; //int = 4 bytes
    double salary; //double = 8 bytes
};

void doubleit(int* x) {
    *x = *x * 2;
}

int main(){

    struct Person* julian = malloc(sizeof(struct Person));
    // What is sizeof(struct Person)? -> 37 bytes
    int* addressOfAge = &(julian->age);
    julian->age = 25;
    printf("The address of p is %x\n", julian); //%x is hexadecimal, %d is decimal
    printf("The address of p-> age is %x\n", &(julian->age));
    printf("Age: %d\n", julian->age);

    free(julian);



    int len = 25; //extra length?
    struct Person2* sean = malloc(sizeof(struct Person));
    sean->name = malloc(len * sizeof(char)); 
    strncpy(sean->name, "sean", strlen("sean")+1); //strlen?
    //sean->name = "sean"; <-This is hardcoded. When you try to free
    //it you will get an error for trying to free it
    //that's why we use strncopy. It can be removed
    //with the rest of the struct.
    printf("Hi! My name is %s\n", sean->name);

    free(sean);
    free(sean->name);


    int y = 5;
    doubleit(&y);



    return 0;
}