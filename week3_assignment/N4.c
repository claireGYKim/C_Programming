#include <stdio.h>
int main(void)
{
    int year;
    scanf("%d", &year);
    
    if(year%4==0){
        printf("윤년입니다.");
    }
    else{
        printf("윤년이 아닙니다.");
    }
    
	return 0;
	
}
