#include <stdio.h>

int main() {
    int k, l;
    char c1, c2;
    scanf("%d %d", &k, &l);
    
    for(int i = 1; i <= l; i++) {
        if (i % 2 == 0) {
            c1 = '/';
            c2 = '*';
        }
        else {
            c1 = '*';
            c2 = '/';
        }
        for (int j = 1; j <= k; j++) {
            if (j % 2 == 1)
                printf("%c", c1);
            else
                printf("%c", c2);
        }
        printf("\n");
    }
    
    return 0;
}
