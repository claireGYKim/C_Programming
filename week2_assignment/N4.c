#include <stdio.h>
int main() {
   double PI = 3.14;
   double r = 3.58;
   double a = r * r * PI;
   double b = 2 * r * PI;
   printf("원의 면적 : %.6f\n", a);
   printf("원의 둘레 : %.6f\n", b);
}
