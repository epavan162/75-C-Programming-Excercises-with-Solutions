/*c program to find leap year are not*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int year,a;
	printf("Enter the year");
	scanf("%d",&year);
	a=year%4;
	if(a==0)
	{
		printf("It is a leap year");
	}
	else
	{
		printf("It is not leap year");
	}
}
