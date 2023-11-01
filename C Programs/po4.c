/*c program to print tables*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}

