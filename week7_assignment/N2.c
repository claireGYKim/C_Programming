#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    // 정수형 변수 4개를 순차적으로 입력
   
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);

    // 두 번째 정수가 입력되면 첫 번째 값과 두 번째 값을 더한 결과를 출력
    if (num2) {
        int result = num1 + num2;
        printf("%d\n", result);
    }

    // 세 번째 정수가 입력되면 위 덧셈 연산 결과에서 세 번째 입력값을 뺀 결과를 출력
    if (num3) {
        int result = (num1 + num2) - num3;
        printf("%d\n", result);
    }

    // 네 번째 정수가 입력되면 위 뺄셈 연산 결과와 네 번째 값을 곱한 결과를 출력
    if (num4) {
        int result = ((num1 + num2) - num3) * num4;
        printf("%d\n", result);
    }

    return 0;
