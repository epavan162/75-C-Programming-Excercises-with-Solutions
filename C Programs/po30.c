/*c program to calculate the simple interest*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int p,t,r,si;
	printf("Enter the values of p,t,r");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100;
	printf("simple interest is %d",si);
}
