/*c program for searching an element in an array 
PIN NO: 18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
#define MAX 10
void main()
{
			int a[MAX];
			int i,item,n;
			int flag=0;

		printf("How many elements to be stored: ");
		scanf("%d",&n);
	

		for(i=0;i<n;i++)
		{
				printf("Enter %d location",i+1);	
				scanf("%d",&a[i]);
		}
		
		printf("Enter the elements to be searched: ");
		scanf("%d",&item);
		
		for(i=0;i<n;i++)
		{
			 	if(a[i]==item)
				{
					flag = 1;
					break;
				}
		}

		if(flag==1)
		{
				printf("\nElement %d is found in a[%d]",item,i);
				return;
		}
		else
		{
				printf("\nElement %d is not found",item);
		}
}

	
