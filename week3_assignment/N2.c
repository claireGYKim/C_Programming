#include <stdio.h>
int main(void)
{
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    
    op == '+' ? printf("%d %c %d = %d\n", a, op, b, a+b): 0;
	op == '-' ? printf("%d %c %d = %d\n", a, op, b, a-b): 0;
	op == '*' ? printf("%d %c %d = %d\n", a, op, b, a*b): 0;
	op == '/' ? printf("%d %c %d = %d\n", a, op, b, a/b): 0;
	return 0;
	
}
