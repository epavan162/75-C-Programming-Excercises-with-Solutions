/*C program to print sum of n natural numbers using function
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
		int i;
	 int sum=0;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
