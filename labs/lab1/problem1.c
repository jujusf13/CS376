#include <stdlib.h>
#include <stdio.h>

// Why does this not work when I change 10
// inside of the loop to sizeof(ptr)

//Check for memory loss

int main(){
    int* ptr;
    ptr = (int *) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++){
        ptr[i] = i;
    }

    for (int i = 0; i < 10; i++){
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}