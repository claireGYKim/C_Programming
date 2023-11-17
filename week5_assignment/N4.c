#include <stdio.h>

int main() {
    int count = 0; 

    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0 && i % 7 != 0 && i % 9 != 0) { // 2, 7, 9의 배수가 아닌 경우
            for (int j = 0; j < 5; j++) {
                printf("%d ", i); // 현재 수를 5번 반복 출력
                count++;

                if (count % 5 == 0) {
                    printf("\n"); // 한 행에 5개씩 출력 후 줄 바꿈
                }
            }
        }
    }

    return 0;
}
