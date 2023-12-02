#include <stdio.h>

enum Month {
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec,
    MonthCount // 추가: 월의 개수를 나타내는 상수
};

int main(void) {
    int i = 1;
    for (i = Jan; i <= Dec; i++)
        printf("%d ", i);
    return 0;
}

