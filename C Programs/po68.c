/*C program to print sum of n natural numbers using recursive function
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
int sum(int);
void main()
{

	int n;
	
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("sum of %d is : %d\n",n,sum(n));

}
int sum(int n)
{
		if(n>=1)
		{
				return(n+sum(n-1));
		}
		return 0;
}
