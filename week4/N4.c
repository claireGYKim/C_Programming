#include <stdio.h>

int main()
{
    int month;
    scanf("%d", &month);

    if((month==1) || (month==2) || (month==3)){
        printf("1사분기");
    }

    if((month==4) || (month==5) || (month==6)){
        printf("2사분기");
    }

    if((month==7) || (month==8) || (month==9)){
        printf("3사분기");
    }

    if((month==10) || (month==11) || (month==12)){
        printf("4사분기");
    }
    return 0;
}
