/*c program to find even or odd*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int a,n;
	printf("Enter a number");
	scanf("%d",&n);
	a=n%2;
	if(a==0)
	{
		printf("It is an even number\n");
	}
	else
	{
		printf("It is odd number\n");
	}
}
