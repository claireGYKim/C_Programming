#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {

    // 각도를 라디안으로 변환
    double angle1 = 210 * M_PI / 180;  // 210도를 라디안으로 변환
    double angle2 = 120 * M_PI / 180;  // 120도를 라디안으로 변환
    double angle3 = 25 * M_PI / 180;   // 25도를 라디안으로 변환

    // sin, cos, tan 계산 및 출력
    printf("%.1lf ", sin(angle1));
    printf("%.1lf ", cos(angle2));
    printf("%.4lf", tan(angle3));

    return 0;
}

