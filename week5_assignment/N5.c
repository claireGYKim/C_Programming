#include <stdio.h>

int main() {
    int celsius, fahrenheit;

    for (celsius = -10; celsius <= 100; celsius += 10) {
        fahrenheit = (int)((9.0 / 5.0) * celsius + 32);
        printf("%d\n", fahrenheit);
    }

    return 0;
}
