//1번

#include <stdio.h>

int main() {
    double mile_to_km = 0.621371;

    double distance = 10.0;
    double distance_from_start = 200.0;

    double total_distance = distance / mile_to_km;
    double distance_from_start_km = distance_from_start / 1000.0;

    double speed = 5.0;

    double remaining_distance = total_distance - distance_from_start_km;
    double time = remaining_distance / speed;

    printf("%.6f\n", time);

    return 0;
}

//2번
#include <stdio.h>

int isLeapYear(int year) {
    // 윤년 여부를 검사하는 함수
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // 윤년
    } else {
        return 0; // 평년
    }
}

int main() {
    int year, month;
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


    scanf("%d", &year);

    if (year < 1900 || year > 2100) {
        printf("년도를 잘못 입력하였습니다.\n");
        return 1;
    }

    if (isLeapYear(year)) {
        daysInMonth[2] = 29; // 윤년인 경우 2월은 29일
    }

    printf("월\t일수\n");
    for (month = 1; month <= 12; month++) {
        printf("%2d\t%2d\n", month, daysInMonth[month]);
    }

    return 0;
}
//3번
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
//4번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n <= 3 || n >= 30) {
        printf("-1");
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (i == (n - 1)) {
                    printf("*");
                    continue;
                }
                if (j == 0 || j == i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}
//5번
#include <stdio.h>

int main() {
    int amount, num_500, num_100, num_50, num_10;

    printf("거스름돈 금액을 입력하세요 (0 이상 10000 이하): ");
    scanf("%d", &amount);

    if (amount < 0 || amount > 10000) {
        printf("올바른 금액을 입력해주세요.\n");
        return 1;
    }

    // 500원짜리 동전 개수 계산
    num_500 = amount / 500;
    amount %= 500; // 500원을 거슬러 주고 남은 금액

    // 100원짜리 동전 개수 계산
    num_100 = amount / 100;
    amount %= 100; // 100원을 거슬러 주고 남은 금액

    // 50원짜리 동전 개수 계산
    num_50 = amount / 50;
    amount %= 50; // 50원을 거슬러 주고 남은 금액

    // 10원짜리 동전 개수 계산
    num_10 = amount / 10;

    printf("%d %d %d %d\n", num_500, num_100, num_50, num_10);

    return 0;
}
//6번
#include <stdio.h>
#include <ctype.h>

int main() {
    int charCount[128] = {0};

    char inputString[1000];

    printf("문자열을 입력하세요: ");
    fgets(inputString, sizeof(inputString), stdin);

    for (int i = 0; inputString[i] != '\0'; i++) {
        char c = inputString[i];
        if (isalnum(c)) {
            // 알파벳 및 숫자인 경우, 대소문자 구분 없이 아스키코드에 해당하는 위치에 개수 추가
            charCount[toupper(c)]++;
        } else if (c >= 0 && c <= 127 && ispunct(c)) {
            // 구두점인 경우, 아스키코드에 해당하는 위치에 개수 추가
            charCount[c]++;
        }
    }

    for (int i = 0; i < 128; i++) {
        if (charCount[i] > 0) {
            printf("%c : %d\n", i, charCount[i]);
        }
    }

    return 0;
}
