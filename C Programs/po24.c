/*c program to print factorial number*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int fact,i,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	fact=1;
	i=1;
	while(i<=n)
	{
		fact=fact*i;
		i=i+1;
	}
	printf("factorial %d\n",fact);
}
