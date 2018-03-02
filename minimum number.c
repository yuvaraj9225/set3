#include<stdio.h>
void main()
{
int a[50],i,j,tem,n;
printf("enter the number of arrays:");
scanf("%d",&n);
printf("enter number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
tem=a[0];
for(i=0;i<n;i++)
{
if(tem>a[i])
{
tem=a[i];
}

}

printf("The minimum number=%d",tem);
}
