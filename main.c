#include <stdio.h>
int main(void)
{
  float  l1,l2,h,per,area,sum;
  printf("Enter L1  = ");
  scanf("%f" ,&l1 );
  printf("Enter L2  = ");
  scanf("%f" ,&l2 );
  printf("Enter High  = ");
  scanf("%f" ,&h );
  per = (l2/l1)*100;
  if(per >= 140){
    sum = l1 + l2;
    area = 0.5 * h * sum;
    printf("Area is %0.2f",area);
  }
    return 0;
}
