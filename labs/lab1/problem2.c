#include <stdlib.h>
#include <stdio.h>

int main(){
    //didn't just copy and paste this. I used words too because
    //it's an easier variable to understand for context.

    char** words = (char*) malloc(10*sizeof(char*)); //free this
    for (int i = 0; i < 10; i++){ //is there a way to find the sizeof words rather than using the number 10?
        words[i] = (char*) malloc(15 * sizeof(char*));//free this
        //in each index of the array, we are allocating memory for another array (2d array)
    }
    
    for (int i = 0; i < 10; i++){
        free(words[i]); //deletes the inner arrays of size 15 bytes
    }
    free(words); //frees the outer array
    // FILO (first in last out)

}
