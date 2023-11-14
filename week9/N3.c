#include <stdio.h>
#include <stdlib.h>

// 오름차순 비교 함수
int ascending_order(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// 내림차순 비교 함수
int descending_order(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int input_size;
    int choice;


    scanf("%d", &input_size);

    if (input_size <= 0) {
        printf("잘못된 배열 크기입니다.\n");
        return 1;
    }

    int *numbers = (int*)malloc(input_size * sizeof(int));
    if (numbers == NULL) {
        printf("메모리 할당 문제가 발생했습니다.\n");
        return 1;
    }

    for (int i = 0; i < input_size; i++) {
        scanf("%d", &numbers[i]);
    }

    scanf("%d", &choice);

    if (choice == 1) {
        qsort(numbers, input_size, sizeof(int), ascending_order);
    } else if (choice == 2) {
        qsort(numbers, input_size, sizeof(int), descending_order);
    } else {
        printf("잘못된 선택입니다. 1 또는 2를 입력하세요.\n");
        free(numbers);
        return 1;
    }

    
    for (int i = 0; i < input_size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers);

    return 0;
}

