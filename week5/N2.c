#include <stdio.h>

int main() {
    int number, count = 0;


    scanf("%d", &number);

    if (number <= 0) {
        return 1;
    }

    do {
        number = number / 10;
        count++;
    } while (number != 0);

    printf("%d", count);

    return 0;
}
