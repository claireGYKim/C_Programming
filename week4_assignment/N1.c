#include <stdio.h>

int main()
{
   int x, y, x1, y1, x2, y2;
   
   scanf("%d %d %d %d %d %d", &x, &y, &x1, &y1, &x2, &y2);
    if((((x <=x1) && (x>=x2)) || ((x >= x1) && (x<= x2))) && (((y>= y1) && (y<=y2)) 
    || ((y<=y1) && (y >=y2))))
     printf("True");
    else 
     printf("False");

    return 0;
}
