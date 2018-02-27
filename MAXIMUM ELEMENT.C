#include <stdio.h>
 
void main() 
{
 int i,n;
 int a[100000];
 printf("enter the 1 to 100000 value");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter the number:",i+1);
  scanf("%d",&a[i]);
 }
 for(i=0;i<=n;i++)
 {
  if(a[0]<a[i])
   a[0]=a[i];
 }
 printf("\nThe largest number is%d",a[0]);
}
