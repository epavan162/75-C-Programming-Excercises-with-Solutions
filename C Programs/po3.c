/*c program for eligible for voting*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are Eligible for voting");
	}
	else
	{
		printf("You are not Eligible for voting");
	}
}
