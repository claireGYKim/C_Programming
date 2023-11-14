#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr, *arr2, *arr3;

    arr = malloc(sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation problem for arr!\n");
        return -1;
    }
    *arr = 100;
    printf("Value : %d\n", *arr);

    free(arr);
    arr = NULL;

    arr2 = malloc(sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation problem for arr2!\n");
        return -1;
    }
    *arr2 = 101;
    printf("Value : %d\n", *arr2);
    
    free(arr2);
    arr2 = NULL;

    arr3 = malloc(sizeof(int));
    if (arr3 == NULL) {
        printf("Memory allocation problem for arr3!\n");
        return -1;
    }
    *arr3 = 102;
    printf("Value : %d\n", *arr3);

    free(arr3);
    arr3 = NULL;

    return 0;
}

