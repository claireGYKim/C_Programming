#include <stdio.h>

int main()
{
  int c, h, g, fi, mi, th, hu, te;
  scanf("%d %d",&h, &g);
  c=h-g;
  fi = c/50000;
  c = c%50000;
  mi = c/10000;
   c = c%10000;
  th = c/1000;
   c = c%1000;
  hu = c/100;
   c = c%100;
  te =  c/10;
   c = c%10;
 
   
  if(h<g)
      
  printf("돈이 부족합니다.");
  
   else 
   {
    printf("50000원 : %d개\n",fi);
    printf ("10000원 : %d개\n",mi);
    printf("1000원 : %d개\n", th);
    printf ("100원 : %d개\n",hu);
    printf ("10원 : %d개\n",te);
   }
    return 0;
}
