#include <stdio.h>

int main() {
    int n;

    // 사용자로부터 정수 입력 받기

    scanf("%d", &n);

    if (n < 1) {
        printf("Error\n");
        return 1;
    }

    int first = 1, second = 1;

    if (n >= 1) {
        printf("%d ", first);
    }
    if (n >= 2) {
        printf("%d ", second);
    }

    for (int i = 3; i <= n; i++) {
        int next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

