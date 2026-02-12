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

void insert(node_t *head, int val);

int main(){
    // Creating handler
    node_t *head = NULL;
    // Creating first node
    head = malloc(sizeof(node_t));
    head->val=10;
    head->left=NULL;
    head->right=NULL;

    return 0;
}

void insert(node_t *head, int val){
    // Creating new node
    node_t *newNode = malloc(sizeof(node_t));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;

    // Empty tree
    if(head == NULL){
        head = newNode;
        return;
    }
    
    // Not empty tree
    node_t *current = head;
    while(1){
        // Value smaller than node value
        if(val < current->val){
            if(current->left == NULL){current->left = newNode;}
            else{
                current = current->left;
                continue;
            }
        }
        //Value bigger than node value
        
    }
}