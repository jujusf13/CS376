#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void) {
    char* name = malloc(25);
    strcpy(name, "Bill"); 
    printf("%s\n", name);

}


/* 
//this is a memory operation
void strcpy(char * dest, char * source){
    // *source means value at the "source" variable because that is a place in memory
    while (*source != NULL){ //Null terminator or 0
        *dest = *source;
        dest ++;
        source ++;
    }
    *dest = NULL; //don't fogret to NUll terminate all strings
}

 */

//Realloc code here

/* 
struct ListNode {
    int age;
    float salary;


    struct ListNode* next; //creates a new ListNode everytime we create a new
                           //ListNode. Makes it more convienient
}
 */