#include <stdio.h>

int main()
{
    float kg, m;
    float BMI;
    scanf("%f %f", &kg, &m);
    BMI = kg / (m * m);
    if (BMI < 18.5){
        printf("저체중");
    }
    else if (BMI < 23.0){
        printf("정상");
    }
    else if (BMI < 25.0){
        printf("과체중");
    }
    else if (BMI < 30.0){
        printf("경도비만");
    }
    else {
        printf("중등도비만");
    }

    return 0;
}
