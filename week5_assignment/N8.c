#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    // 위쪽 삼각형 출력
    for (int i = 1; i <= n; i++) {
        // 공백 출력
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // '*' 출력
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // 아래쪽 삼각형 출력
    for (int i = n - 1; i >= 1; i--) {
        // 공백 출력
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // '*' 출력
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
