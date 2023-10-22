#include <stdio.h>

int main() {
    char input[21];


    int i;
    for (i = 0; i < 20; i++) {
        scanf(" %c", &input[i]);

        if (input[i] == '.') {
            break;
        }
    }


    for (int j = 0; j < i; j++) {
        printf("%c", input[j]);
    }

    printf("\n");

    return 0;
}
