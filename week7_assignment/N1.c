#include <stdio.h>

int main() {
    // 상수로 배열의 크기를 정의
    const int array_size = 5;

    // 정수형 배열을 선언
    int numbers[array_size];

    // 사용자로부터 정수 값을 입력받아 배열에 저장
    for (int i = 0; i < array_size; i++) {
       
        scanf("%d", &numbers[i]);
    }

    // 배열 원소의 합을 저장할 변수를 선언하고 초기화
    int sum = 0;

    // 배열 원소에 접근하기 위한 포인터 변수를 선언
    int *ptr = numbers;

    // 반복문을 이용하여 배열의 모든 원소를 더함
    for (int i = 0; i < array_size; i++) {
        sum += *ptr;
        ptr++; // 다음 원소로 포인터를 이동
    }

    // 결과를 출력
    printf("%d\n", sum);

    return 0;
}
