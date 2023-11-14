#include <stdio.h>
#include <math.h>

int main() {
    double kor = 10000000;

    double usa_rate = 1120.0;
    double jpn_rate = 11.21;

    int usa_amount = (int)(kor / usa_rate);
    int jpn_amount = (int)(kor / jpn_rate);

    printf("%d 달러\n", usa_amount);
    printf("%d 엔\n", jpn_amount);

    return 0;
}
