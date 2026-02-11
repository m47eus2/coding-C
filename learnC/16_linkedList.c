#include <stdio.h>
#include <stdlib.h>

// Linked list  - array that can gets bigger or smaller from any point
// Items can be added or removed from any point in the list, no need to define size
// To reach n item there is need to iterating from beggining of the array
// Less efficient, each item must store value and pointer

// Linked list is made with nodes - each node contains value and pointer to the next node
// Last node contains null pointer
// Whole structure is accessable with pointer pointing first node

// Node structure
typedef struct node{
    int val;
    struct node *next;
} node_t;

// Functions definition
void printList(node_t *head);
void append(node_t *head, int val);
void push(node_t **head, int val);
int pop(node_t **head);
int removeLast(node_t **head);
int removeByIndex(node_t **head);

int main(){
    // Creating list handler witch is pointer to the first node 
    node_t *head = NULL;

    // Creating first node
    head = (node_t*)malloc(sizeof(node_t));
    head->val = 1;
    head->next = NULL;

    // Creating second node
    head->next = (node_t*)malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = NULL;

    // Printing list
    printList(head);
    printf("\n");

    // Appending new values
    append(head, 3);
    append(head, 4);
    append(head, 8);

    // Printing list
    printList(head);
    printf("\n");

    // Pushing new value
    push(&head, 8);
    push(&head, 9);

    // Printing list
    printList(head);
    printf("\n");

    // Popping the list
    pop(&head);
    pop(&head);
    pop(&head);
    pop(&head);
    
    // Printing list
    printList(head);
    printf("\n");

    // Removing lat
    removeLast(&head);
    removeLast(&head);

    //Printing list
    printList(head);

    return 0;
}

void printList(node_t *head){
    node_t *current = head;
    if(current != NULL){
        while(current != NULL){
            printf("%d",current->val);
            current = current->next;
        }
    }
}

void append(node_t *head, int val){
    node_t *current = head;
    while(current->next != NULL){current = current->next;}

    current->next = (node_t*)malloc(sizeof(node_t));
    current->next->next = NULL;
    current->next->val = val;
}

void push(node_t **head, int val){
    node_t *newNode = (node_t*)malloc(sizeof(node_t));
    newNode->next = *head;
    newNode->val = val;
    *head = newNode;
}

// Not perfect implementation, should returning error when list is empty
int pop(node_t **head){
    if(*head != NULL){
        node_t *first = *head;
        node_t *next = first->next;
        int ret = first->val;
        free(*head);
        *head = next;
        return ret;
    }
    else{
        return 0;
    }
}

int removeLast(node_t **head){
    node_t *current = *head;
    if(current == NULL){return 0;}
    if(current->next == NULL){
        int ret =  current->val;
        free(current);
        *head = NULL;
        return ret;
    }
    while(current->next->next != NULL){current = current->next;}
    int ret = current->next->val;
    free(current->next);
    current->next = NULL;
    return ret;
}

int removeByIndex(node_t **head){
    
}