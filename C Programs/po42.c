/*c program a quick of demo of nested if-else
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int i;
	printf("Enter either  1 or 2");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Basics of computer Engineering\n");
	}
	else
	{
		if(i==2)
		{
			printf("C language\n");
		}
		else
		{
			printf("Sorry wrong input\n");
		}
	}
}
