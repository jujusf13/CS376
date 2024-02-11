#include <stdlib.h>
#include <stdio.h>
#include <string.h>



struct ListNode {
    int letter; //was a letter previously
    struct ListNode* next;
    struct ListNode* prev;
};

struct DoublyLinkedList{
    struct ListNode* head;
    struct ListNode* tail;
    int size;
};


//This is not my method either
struct ListNode* createNode(char letter) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (newNode == NULL) {
        // Handle memory allocation failure, e.g., return NULL or exit the program
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    newNode->letter = letter;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// This is not my method. I copied it from online so I could 
// easily set up my LinkedList.
struct ListNode* addToEnd(struct DoublyLinkedList* list, char letter) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode)); //Creates more memory than needed?
    newNode->letter = letter;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (list->head == NULL) {
        list->head = newNode;
        list->tail = newNode; 
    } else {
        struct ListNode* current = list->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
        list->tail = newNode;
    }
    return newNode;
}

// Not my code
struct ListNode* searchNode(struct DoublyLinkedList* list, char target) {
    struct ListNode* current = list->head;
    while (current != NULL) {
        if (current->letter == target) {
            return current;  // Found the node with the target value
        }
        current = current->next;
    }
    return NULL;  // Node with the target value not found
}


//MUST USE IN SORT FUNCTION SOME HOW.
void swap(struct ListNode** head, struct ListNode* node1, struct ListNode* node2) {

    if (*head == node1) {
        *head = node2;
    } else if (*head == node2) {
        *head = node1;
    }

    // swap node 1 and node 2 if node 2 comes before
    if (node2->next == node1) {
        struct ListNode* temp = node1;
        node1 = node2;
        node2 = temp;
    }

    // Swap adjacent nodes
    if (node1->next == node2 || node2->next == node1) {
        if (node1->prev) {
            node1->prev->next = node2;
        }
        if (node2->next) {
            node2->next->prev = node1;
        }
        node2->prev = node1->prev;
        node1->next = node2->next;
        node1->prev = node2;
        node2->next = node1;
    } else { // Swap non-adjacent nodes
        
        struct ListNode* temp1 = node1->prev;
        struct ListNode* temp2 = node1->next;
        struct ListNode* temp3 = node2->prev;
        struct ListNode* temp4 = node2->next;
        
        if (node1->prev) {
            node1->prev->next = node2;
        }
        if (node1->next) {
            node1->next->prev = node2;
        }
        if (node2->prev) {
            node2->prev->next = node1;
        }
        if (node2->next) {
            node2->next->prev = node1;
        }

        node1->prev = temp3;
        node1->next = temp4;
        node2->prev = temp1;
        node2->next = temp2;
    }
}


void sortLinkedList(struct ListNode** head) {
    struct ListNode* current = *head;

    // Checking for empty list
    if (*head == NULL){
        return;
    }

    while (current->next){
        if (current->next->letter > current->letter){
            swap(head, current, current->next);
        }
        current = current->next;
    }
}


int main(void){

    struct DoublyLinkedList* list = (struct DoublyLinkedList*)malloc(sizeof(struct DoublyLinkedList));
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;
    
    // struct ListNode* a = addToEnd(list, 'a');
    // struct ListNode* b = addToEnd(list, 'b');
    // struct ListNode* c = addToEnd(list, 'c');
    // struct ListNode* d = addToEnd(list, 'd');
    // struct ListNode* e = addToEnd(list, 'e');
    // struct ListNode* f = addToEnd(list, 'f');

    struct ListNode* a = addToEnd(list, 'h');
    struct ListNode* b = addToEnd(list, 'b');
    struct ListNode* c = addToEnd(list, 'c');
    struct ListNode* d = addToEnd(list, 'd');
    struct ListNode* e = addToEnd(list, 'k');
    struct ListNode* f = addToEnd(list, 'f');

    sortLinkedList(&list->head);


    //swap(&list->head, e, c);
    
    struct ListNode* current = list->head;
    while (current != NULL) {
        printf("%c\n", current->letter);
        current = current->next;
    }

}
