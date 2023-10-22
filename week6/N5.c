#include <stdio.h>

int main() {
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int matrix3[3][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    int result[3][3];

    // 행렬의 합 계산
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j] + matrix3[i][j];
        }
    }

    // 행렬의 합 출력
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%2d", result[i][j]);
            if (j < 2) {
                printf(" "); // 행렬 요소 사이에 공백 추가
            }
        }
        printf("\n");
    }

    return 0;
}
