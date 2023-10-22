#include <stdio.h>

int main() {
    int num, product = 1;


    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        } else if (num > 0) {
            product *= num;
        }
    }

    printf("%d", product);

    return 0;
}
