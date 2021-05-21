#include <stdio.h>

int main() 
{
  double x,y;
 int r =scanf("%lg%lg", &x, &y);
  printf("%lg\n", x+y);
  return r;
}
