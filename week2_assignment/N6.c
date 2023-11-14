#include <stdio.h>

int main() {
    
    double mtok = 0.621371;

    double totalm = 10.0;
    double start = 150.0;


    double totalkm = totalm / mtok;
    double dskm = start / 1000.0;

    double speedk = 3.0;

    double remain = totalkm - dskm;

    double result = remain / speedk;

    printf("%.6f", result);

    return 0;
}
