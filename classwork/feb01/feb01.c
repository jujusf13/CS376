#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* x = malloc (10 * sizeof(int));

    x[1] = 5;
    for (int i = 0; i < 10; i++){
        x[i] = i;
    }
}

