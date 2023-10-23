#include <stdio.h>

int main() {
    int arr[5] = { 111, 222, 333, 444, 555 };
    int *aptr;

    aptr=&arr[2];
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);

    return 0;
}
