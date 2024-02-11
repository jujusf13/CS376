#include <stdlib.h>
#include <stdio.h>


struct ArrayList {
    int* arr;
    int size; // size of array with empty spaces
    int howmany; // how many items in array
};


int add(struct ArrayList* list, int item){

    if (list->howmany > 0){
        if (list->howmany >= list->size){
            // increase size of array
            list->size = list->size*2; // increasing size of array by 2
            list->arr = (int*)realloc(list->arr, list->size * sizeof(int));
        
        }
    } else{
        printf("There is nothing to remove\n");
    }
    
    // do adding to array here
    list->arr[list->howmany] = item;
    list->howmany++;
    
    return 0;
}

int removeFromEnd(struct ArrayList* list){ //Removes from end
    if (list->howmany <= list->size*2){
        list->size = list->size/2; // increasing size of array by 2
        list->arr = (int*)realloc(list->arr, list->size * sizeof(int));
    }

    list->howmany--;
    return 0;
}

int get(struct ArrayList* list, int index) {

    if (index < 0 || index >= list->howmany) {
        printf("Index out of bounds\n");
    }

    return list->arr[index];
}

// Create get method



int main() {

    //SHOULD BE ALL GOOD HERE
    // Creating arraylist

    struct ArrayList* list = (struct ArrayList*) malloc(sizeof(struct ArrayList));
    list->size = 10; //initial size
    list->howmany = 0;
    list->arr = (int*) malloc(sizeof(int));

    add(list, 10);
    add(list, 10);
    add(list, 10);
    add(list, 40);



    for (int i = 0; i < list->howmany; i++){
        printf("%d\n", list->arr[i]);
    }

    printf("\n");
    int a = get(list, 3);
    printf("%d\n", a);


}