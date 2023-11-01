/*c program to print array elements using pointers
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
		int i,a[5];
		int *pa;
		 pa=&a[0];
		for(i=0;i<5;i++)
		{
				printf("Enter the value for a[%d]",i);
				scanf("%d",pa+sizeof(int)*i);
		}
		for(i=0;i<5;i++)
		{
				printf("a[%d]=%d\t",i,*(pa+sizeof(int)*i));
		}
}
	
