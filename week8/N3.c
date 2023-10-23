#include <stdio.h>

int main() {
    char names[4][10] = {"철희", "영수", "영희", "영철"};
    int scores[4][4]; // 4명의 점수를 저장할 배열
    int total[4] = {0}; // 각 사람의 총점을 저장할 배열
    int average[4]; // 각 사람의 평균을 저장할 배열

    for (int i = 0; i < 4; i++) {
        printf("%s의 국어, 영어, 수학, 과학 점수를 입력하세요: ", names[i]);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &scores[i][j]);
            total[i] += scores[i][j];
        }
        average[i] = total[i] / 4; // 정수로 평균 계산
    }

    printf("\n--- 성적표 ---\n");
    for (int i = 0; i < 4; i++) {
        printf("%s: 국어=%d, 영어=%d, 수학=%d, 과학=%d, 총점=%d, 평균=%d, ",
               names[i], scores[i][0], scores[i][1], scores[i][2], scores[i][3], total[i], average[i]);
        if (average[i] >= 90) {
            printf("Pass\n");
        } else {
            printf("Fail\n");
        }
    }

    return 0;
}
