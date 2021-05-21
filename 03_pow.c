#include <math.h>
#include <stdio.h>

int main() 
{
 double x=0.0, y=0.0;
int r =scanf("%lf%lf", &x, &y);
 double result= pow(x,y);
 printf("%lf", result);
return r;
}
