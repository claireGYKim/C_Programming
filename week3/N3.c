#include <stdio.h>
int main(void)
{
    double a, c;
    scanf("%lf", &a);
    c = (a-32)/1.8;


    printf("화씨 %.1f도는 섭씨 %.1f도 입니다.\n", a, c);
    return 0;
}
