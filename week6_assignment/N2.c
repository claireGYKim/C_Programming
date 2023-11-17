#include <stdio.h>

// 함수: 배열을 오름차순으로 정렬
void ascendingSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// 함수: 배열을 내림차순으로 정렬
void descendingSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

int main() {
    int values[10];
    char option;

    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &values[i]);
    }

    
    scanf(" %c", &option);

    // 입력에 따라 정렬 실행
    if (option == 'A') {
        ascendingSort(values, 10);
    } else if (option == 'D') {
        descendingSort(values, 10);
    } 

    
    for (int i = 0; i < 10; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    return 0;
}
