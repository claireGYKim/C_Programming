#include <stdio.h>
#include <math.h>

int main() {
   int a = 4;
   int b = 5;
   int c_squared = b * b - a * a;
   int c = sqrt(c_squared);
   printf("삼각형의 높이 : %d", c);
   
   return 0;
}
