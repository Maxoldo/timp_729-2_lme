#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
 int n = 0, i, sum=0, unsum=0;
  (void)scanf("%d", &n);
 int mas[n];
 memset(mas, 0, sizeof mas);
 for(i =1; i<=n;i++)
 {
  (void) scanf("%d", &mas[i]);
  
 }
 for(i=1; i<=n-1; i++)
 {
  if(mas[i]<=mas[i+1])
  {
   sum+=1;
  }
  else 
  {
   unsum+=1;
  }
 }

 if(sum>=unsum)
 {
   printf("%d", 1);
   
 }
 else
 {
   printf("%d", 0);
   
 }
  return 0;
}
