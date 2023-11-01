/*c program using arrays
PIN NO: 18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
#define MAX 10
void main()
{
		
		int a[MAX];
		int size,i;
		while(1)
		{
				printf("Enter the size of array");
				scanf("%d",&size);
				if(size>MAX)
				{
						printf("limit exceed the MAX is %d\n",MAX);
						continue;
				}
				else
				{
						break;
				}
		}
				for(i=0;i<size;i++)
				{
						printf("Enter value for a[%d]",i);
						scanf("%d",&a[i]);
				}
				for(i=0;i<size;i++)
				{
						printf("\na[%d]=%d",i,a[i]);
				}
}
