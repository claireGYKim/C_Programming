#include <stdio.h>
int main(void)
{
    int a, b;
    int result;
    scanf("%d %d", &a, &b);
    if (b >= 0) {
        result = a << b;
    } else {
        result = a >> -b;
    }
    
    printf("%d", result);
    
	return 0;
	
}
