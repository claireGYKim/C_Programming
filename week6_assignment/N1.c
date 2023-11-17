#include <stdio.h>

int main() {
    int scores[5];
    int sum = 0;
    int max = -1;
    int min = 101;

    for (int i = 0; i < 5; i++) {
        int input;

        while (1) {
            
            if (scanf("%d", &input) == 1) {
                
                if (input < 0) {
                    printf("잘못된 입력입니다.\n");
                } else {
                    scores[i] = input;
                    break;
                }
            } 
        }

        // 최고점수, 최저점수 업데이트
        if (scores[i] > max) {
            max = scores[i];
        }
        if (scores[i] < min) {
            min = scores[i];
        }

        // 총합 계산
        sum += scores[i];
    }

    // 평균 계산
    float average = (float)sum / 5;

    // 결과 출력
    printf("total = %d\n", sum);
    printf("mean = %.2f\n", average);
    printf("max = %d\n", max);
    printf("min = %d\n", min);

    // 합격 여부 판단
    if (sum >= 350) {
        printf("합격입니다.\n");
    } else {
        printf("불합격입니다.\n");
    }

    return 0;
}
