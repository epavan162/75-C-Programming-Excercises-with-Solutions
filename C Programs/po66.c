/*c program for finding factorial of a number using recursive function
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
	if(n>=1)
	{
		return(n*fact(n-1));
	}
	else
		return 1;
}
