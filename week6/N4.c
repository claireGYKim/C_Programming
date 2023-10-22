#include <stdio.h>

int main() {
    int scores[3][3]; // 3명의 학생에 대한 3과목의 점수를 저장하는 배열
    int total[3] = {0}; // 각 학생별 총점을 저장하는 배열
    float avg[3]; // 각 학생별 평균을 저장하는 배열

    // 각 학생의 점수 입력받음
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores[i][j]);
            total[i] += scores[i][j]; // 총점 계산
        }
        avg[i] = (float)total[i] / 3.0; // 평균 계산
    }

    // 결과 출력
    for (int i = 0; i < 3; i++) {
        printf("Student %d : total %d, avg %.1f, ", i + 1, total[i], avg[i]);
        if (total[i] >= 240) {
            printf("Pass\n");
        } else {
            printf("Fail\n");
        }
    }

    return 0;
}
