#include <stdio.h>
#include <stdlib.h>

int main(){
    //
    // Iterating list with pointers
    //

    int list[] = {1,2,3,4};
    int *pointerToList = list;

    // iterating by list
    for(int i=0; i<4; i++){
        printf("List element %d with address %p: %d\n",i,&list[i],list[i]);
    }
    printf("\n");

    // iterating by pointer
    for(int i=0; i<4; i++){
        printf("List element %d with address %p: %d\n",i,pointerToList+i,*(pointerToList+i));
    }
    printf("\n");

    // iterating by list but using pointer (list name is pointer to the first variable in the list)
    // list+i == &list[i]
    for(int i=0; i<4; i++){
        printf("List element %d with address %p: %d\n",i,list+i,*(list+i));
    } 
    printf("\n");

    //
    // Dynamicaly allocating array
    //

    int size = 4;
    int *dynList = (int*)malloc(sizeof(int) * size);

    for(int i=0; i<4; i++){
        dynList[i]=i;
    }

    for(int i=0; i<4; i++){
        printf("%d",dynList[i]);
    }
    printf("\n");
    for(int i=0; i<4; i++){
        printf("%d",*(dynList+i));
    }
    printf("\n\n");

    free(dynList);

    //
    // Dynamically allocating 2D array
    //

    int rows = 2;
    int cols = 3;

    // Allocating memory for list of pointers to another lists
    int **dynList2d = (int**)malloc(rows*sizeof(int*));

    // Allocating rows lists
    dynList2d[0] = (int*)malloc(cols*sizeof(int));
    dynList2d[1] = (int*)malloc(cols*sizeof(int));

    for(int i=0; i<cols; i++){
        dynList2d[0][i] = i+1;
    }
    for(int i=0; i<cols; i++){
        dynList2d[1][i] = i+11;
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("Element [%d,%d] = %d\n",i,j,dynList2d[i][j]);
        }
    }
    printf("\n");

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("Element [%d,%d] = %d\n",i,j,*(*(dynList2d+i)+j));
        }
    }

    free(dynList2d[0]);
    free(dynList2d[1]);
    free(dynList2d);

    return 0;
}