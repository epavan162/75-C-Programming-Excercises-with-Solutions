/*c program to find biggest among three numbers*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is big\n");
		}
		else
		{
			printf("c is big\n");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is big\n");
		}
		else
		{
			printf("c is big\n");	
		}
	}
	
}
		
