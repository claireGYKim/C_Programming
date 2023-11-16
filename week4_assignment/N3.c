#include <stdio.h>

int main()
{
    int m,w;
    double d;
    char c;
    scanf("%d %c",&m, &c);
    d = m *0.00087;
    w = m * 1152;
    
    switch(c)
    {
    case 'd':
     printf("%d원", w);
      break;
     
     default:
     
    printf("%f달러", d);
     break;
     
     
    }
    
    return 0;
}
