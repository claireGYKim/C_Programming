#include <stdio.h>
int main(void)
{
    int a;
    int b;

    scanf("%d", &a);

    b = a % 2;

    if (b == 0) {
        printf("짝수");
    } else {
        printf("홀수");
    }

    return 0;
}
