#include <stdio.h>

int main() {
    int numbers[10];
    int i;



    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }


    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            printf("Even\n", numbers[i]);
        } else {
            printf("Odd\n", numbers[i]);
        }
    }

    return 0;
}
