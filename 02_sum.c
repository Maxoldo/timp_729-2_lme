#include <stdio.h>

int main() 
{
  double x=0.0,y=0.0;

  int r =scanf("%lf%lf", &x, &y);
  
  double z= x+y;

  printf("%lf\n", z);

  return r;
}
