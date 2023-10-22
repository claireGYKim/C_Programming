#include <stdio.h>

int main() {
    int num, count = 0;

    scanf("%d", &num);

    if (num <= 0) {
        return 1; // 오류 코드로 종료
    }

    printf("Divisors of %d : ", num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i); // 약수 출력
            count++; // 약수 개수 증가
        }
    }

    printf("\nNumber of Divisors of %d : %d\n", num, count);

    return 0;
}
