#include <stdio.h>

int main() {
    int a, b;
    int *ptr; // 포인터 변수 선언


    scanf("%d %d", &a, &b);



    // 임시 변수를 사용하여 a와 b의 값을 교환
    int tmp = a;
    a = b;
    b = tmp;

    printf("%d %d", a, b);

    return 0;
}
