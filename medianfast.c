#include<stdio.h>
int main()
{
    int a[20],n,i,j,tem;
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
    if(a[i]>a[j])
    tem=a[i];
    a[i]=a[j];
    a[j]=tem;
    }
    printf("the median element is:");
    if(n%2==0)
    {
    printf("%d",(a[n/2]+a[(n/2)-1])/2);
    }
    else
    {
     printf("%d",a[(n-1)/2]);
     }
	return 0;
}
