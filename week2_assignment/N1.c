#include <stdio.h>

int main() {
    double ktom = 0.621371;

    
    double kilometers[] = { 40, 400 };

    
    double miles_40km = kilometers[0] * ktom;
    printf("40km to mile : %.6f\n", miles_40km);

    
    double miles_400km = kilometers[1] * ktom;
    printf("400km to mile : %.6f\n", miles_400km);

    return 0;
}
