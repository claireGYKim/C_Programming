#include <stdio.h>

int main() {
    int op1, op2;
    char op;

    scanf("%d %c %d", &op1, &op, &op2);

    switch(op){
        case'+':
            printf("%d %c %d = %d\n", op1, op, op2, op1+op2);
            break;

        case'-':
            printf("%d %c %d = %d\n", op1, op, op2, op1-op2);
            break;

        case'*':
            printf("%d %c %d = %d\n", op1, op, op2, op1*op2);
            break;

        case'/':
            if(op2!=0)printf("%d %c %d = %d\n", op1, op, op2, op1/op2);
            else printf("0으로 나눌 수 없습니다.");
            break;

        case'%':
            printf("%d %c %d = %d\n", op1, op, op2, op1%op2);
            break;

        default:
            printf("연산을 수행할 수 없습니다.");
    }

    return 0;
}
