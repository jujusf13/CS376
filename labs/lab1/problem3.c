#include <stdlib.h>
#include <stdio.h>


// I think this is what he is asking for
// a is arr and size is n (check instructions)
void bubbleSort(int* arr, int n) { //what if I just pass in int arr instead of int* arr?
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (*(arr+j) > *(arr+j+1)) {
                // Swap arr[j] and arr[j+1]
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}

struct ListNode{
    int num;
    struct ListNode* next;

};

int main() {
    //int arr[] = {5,10,15,20,25,30,35,40,45,50};
    int arr[] = {50,20,30,45,69,73,99,81,23,22};

    int n = 10;
    bubbleSort(arr,n);

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}