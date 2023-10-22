#include <stdio.h>
int main(void)
{
    double wonDollarExchangeRate, dollar;
    int won;

    scanf("%lf %lf", &wonDollarExchangeRate, &dollar);
    won = dollar*wonDollarExchangeRate;

    printf("%.2f달러는 %d원 입니다.\n", dollar, won);
    return 0;
}
