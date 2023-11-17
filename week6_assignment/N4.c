#include <stdio.h>

int main() {
    int digitCounts[10] = {0}; // 0부터 9까지의 숫자 개수를 저장하는 배열 초기화

    int input;

    // 숫자 입력 받기
    while (1) {
        scanf("%d", &input);

        if (input == -1) {
            break; // -1을 입력하면 입력 종료
        }

        // 입력된 숫자의 범위 검사
        if (input < 0 || input > 99) {
            continue;
        }

        if (input == 0) {
            digitCounts[0]++;
        }
        else {
            while (input > 0) {
                int digit = input % 10;
                digitCounts[digit]++;
                input /= 10;
            }
        }
    }

    // 결과 출력
    for (int i = 0; i < 10; i++) {
        printf("%d : %d\n", i, digitCounts[i]);
    }

    return 0;
}
