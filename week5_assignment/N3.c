#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    
    for (int i = 1; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }

    
    return 0;
}
