#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // 공백 출력
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // '*' 출력
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
