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
