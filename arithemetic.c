#include<stdio.h>
int main()
{
	int n,a,d,i,sum;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value d:");
	scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		sum=sum+a;
		a=a+d;
	}
	printf("the arithmetic sum upto %d numbers =%d",n,sum);
}
