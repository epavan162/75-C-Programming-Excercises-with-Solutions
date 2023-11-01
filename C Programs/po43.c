/*c program to find given number is a prime number or not
PIN NO:18172-CM-002
E.PAVAN KAYAN*/
#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter a number");
	scanf("%d",&num);
	i=2;
	if(i<=num-1)
	{
		if(num%i==0)
		{
			printf("This is not a prime number\n");
		}
		else
		{
			printf("This is prime number\n");
		}
	}
}
