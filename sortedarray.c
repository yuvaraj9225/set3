#include<stdio.h>
void main()
{
    int a[5],n,i,j,tem;
    printf("\nenter the size of an array:");
    scanf("\n%d",&n);
    printf("\nenter the array elements:");
    for(i=0;i<n;i++)
    {
   scanf("\n%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    if(a[i]<a[j])
    {
    tem=a[i];
    a[i]=a[j];
    a[j]=tem;
    }
    }
    }
    printf("\n The sorted array");
  for(i=0;i<n;i++)
  printf("\n %d",a[i]);
}
