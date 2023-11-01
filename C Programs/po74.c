/*c program to find biggest and smallest among n numbers
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
#define MAX 10
void main()
{
		int n;
		int a[MAX];
		int i,big,small;
		
		printf("Enter the size of the array\n");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			printf("Enter value  a[%d]",i);
			scanf("%d",&a[i]);
		}
		big=small=a[0];
		for(i=1;i<n;i++)
		{
				if(big<a[i])
				{
					big=a[i];
				}
				if(small>a[i])
				{
					small=a[i];
				}
		}
		printf("Biggest number is %d\n",big);
		printf("Smallest number is %d\n",small);
}
			

