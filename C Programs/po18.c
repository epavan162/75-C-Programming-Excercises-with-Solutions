/*c program to perform relation between two integers*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/

#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the values of a,b");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("a is big\n");
	}
	else
	{
		if(b>a)
		{
			printf("b is big\n");
		}
		else
		{
			printf("a and b are equal");
		}
	}
}
