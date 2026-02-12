#include <stdio.h>
#include <stdlib.h>

// Binary tree - each node has maximum 2 children
// Used in efficient searching and sorting algorithms
// Balanced tree - deph of the left and right subtrees for every node differy by max 1
// Balanded tree has predictable height log2(n) where n is number of nodes in tree
// Types of searching data in tree:
// Depth-first search (DFS) - starts at the root and explores as far as possible along each branch
// Breadth-first seach (BFS) - starts at the root and visit every node before going deeper

typedef struct node{
    int val;
    struct node *left;
    struct node *right;
}node_t;

void insert(node_t **head, int val);
void insertRec(node_t **head, int val);

int main(){
    // Creating handler
    node_t *head = NULL;
    
    insert(&head, 10);
    insert(&head, 5);
    insertRec(&head, 3);
    insertRec(&head, 15);

    printf(" %d \n", head->val);
    printf(" %d %d \n", head->left->val, head->right->val);
    printf(" %d \n", head->left->left->val);

    return 0;
}

void insert(node_t **head, int val){
    // Empty tree
    if(*head == NULL){
        // Creating new node
        node_t *newNode = malloc(sizeof(node_t));
        newNode->val = val;
        newNode->left = NULL;
        newNode->right = NULL;
        *head = newNode;
        return;
    }
    
    // Not empty tree
    node_t *current = *head;
    while(current != NULL){
        // Value smaller than node value
        if(val < current->val){
            if(current->left == NULL){
                // Creating new node
                node_t *newNode = malloc(sizeof(node_t));
                newNode->val = val;
                newNode->left = NULL;
                newNode->right = NULL;
                current->left = newNode;
                return;
            }
            else{
                current = current->left;
                continue;
            }
        }
        //Value bigger than node value
        else if(val > current->val){
            if(current->right == NULL){
                // Creating new node
                node_t *newNode = malloc(sizeof(node_t));
                newNode->val = val;
                newNode->left = NULL;
                newNode->right = NULL;
                current->right = newNode;
                return;
            }
            else{
                current = current->right;
                continue;
            }
        }
        else{return;}
    }
}

void insertRec(node_t **head, int val){
    // Empty tree
    if(*head == NULL){
        // New node 
        node_t *newNode = malloc(sizeof(node_t));
        newNode->val = val;
        newNode->left = NULL;
        newNode->right = NULL;
        *head = newNode;
        return;
    }
    
    // Not empty tree
    // Value smaller than current node
    node_t *current = *head;
    if(val < current->val){
        insertRec(&(current->left), val);
    }
    else if(val > current->val){
        insertRec(&(current->right), val);
    }
    else if(val == current->val){return;}
}