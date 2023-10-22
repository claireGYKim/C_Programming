#include <stdio.h>

int main() {
    int amount, num_500, num_100, num_50, num_10;

    printf("거스름돈 금액을 입력하세요 (0 이상 10000 이하): ");
    scanf("%d", &amount);

    if (amount < 0 || amount > 10000) {
        printf("올바른 금액을 입력해주세요.\n");
        return 1;
    }

    // 500원짜리 동전 개수 계산
    num_500 = amount / 500;
    amount %= 500; // 500원을 거슬러 주고 남은 금액

    // 100원짜리 동전 개수 계산
    num_100 = amount / 100;
    amount %= 100; // 100원을 거슬러 주고 남은 금액

    // 50원짜리 동전 개수 계산
    num_50 = amount / 50;
    amount %= 50; // 50원을 거슬러 주고 남은 금액

    // 10원짜리 동전 개수 계산
    num_10 = amount / 10;

    printf("%d %d %d %d\n", num_500, num_100, num_50, num_10);

    return 0;
}
