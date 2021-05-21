#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
 int n = 0, i, k=1;
 (void)scanf("%d", &n);
 int mas[n];
 memset(mas, 0, sizeof mas);
 for(i =1; i<=n;i++)
 {
  (void)scanf("%d", &mas[i]);
  
 }
 for(i=1; i<=n; i++)
 {
  k=k*(mas[i]-i);
 }
  printf("%d", k );
  return 0;
}
