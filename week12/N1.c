#include <stdio.h>

// 함수 선언
void getUserInput(int *answer);
void getUserInputGuess(int *guess);
void checkGuess(int *answer, int *guess, int *strikes, int *balls);

int main() {
    // 변수 초기화
    int answer[3], strikes, balls, attempts;
    attempts = 0;

    // 사용자로부터 정답 입력 받기
    getUserInput(answer);

    // 최대 7회차까지 반복
    while (attempts < 7) {
        // 사용자 입력 받기
        int guess[3];
        printf("[%d회차]\n", attempts + 1);
        printf("0부터 9까지 숫자를 3개 입력 : ");
        scanf("%1d%1d%1d", &guess[0], &guess[1], &guess[2]);

        // 입력 확인 및 결과 출력
        strikes = 0;  // 초기화 위치 변경
        balls = 0;    // 초기화 위치 변경
        checkGuess(answer, guess, &strikes, &balls);
        printf("[결과]스트라이크 : %d, 볼 : %d\n\n", strikes, balls);

        // 3스트라이크인 경우 게임 종료
        if (strikes == 3) {
            printf("사용자가 승리하였습니다.\n");
            break;
        }

        // 다음 시도를 위해 변수 초기화
        attempts++;
    }

    // 7회차까지 성공하지 못한 경우
    if (attempts == 7) {
        printf("컴퓨터가 승리하였습니다.\n");
    }

    return 0;
}

// 사용자에게 정답 숫자 입력 받기
void getUserInput(int *answer) {
    printf("숫자야구의 정답을 입력하세요 : ");
    scanf("%1d%1d%1d", &answer[0], &answer[1], &answer[2]);
    printf("\n");
}

// 사용자에게 추측 숫자 입력 받기
void getUserInputGuess(int *guess) {
    // 필요한 경우 사용자 입력 받기 로직 추가
}

// 입력한 숫자와 정답을 비교하고 스트라이크와 볼 개수 계산
void checkGuess(int *answer, int *guess, int *strikes, int *balls) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (guess[i] == answer[j]) {
                if (i == j) {
                    (*strikes)++;
                } else {
                    (*balls)++;
                }
            }
        }
    }
}

