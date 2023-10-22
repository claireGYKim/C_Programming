#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n <= 3 || n >= 30) {
        printf("-1");
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (i == (n - 1)) {
                    printf("*");
                    continue;
                }
                if (j == 0 || j == i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}