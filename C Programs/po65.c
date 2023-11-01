/*c program for finding factorial of a number using function 
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
int fact(int);
void main()
{

	int n;
	
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("factorial of %d is %d\n",n,fact(n));

}
int fact(int n)
{

	int i;
	int fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;

}
