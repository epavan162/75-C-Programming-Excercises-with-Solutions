/*c program for sorting of 5 numbers in descending order using bubble sort
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
		int i,j,temp;
		int a[5];
		for(i=0;i<5;i++)
		{
				printf("Enter value for a[%d]",i);
				scanf("%d",&a[i]);
		}
		printf("\nGiven list");
	   for(i=0;i<5;i++)
		{
				printf("\na[%d]=%d",i,a[i]);
		}
		for(i=0;i<5-1;i++)
		{
				for(j=0;j<5-i-1;j++)
				{
						if(a[j]<a[j+1])
						{
								temp=a[j];
								a[j]=a[j+1];
								a[j+1]=temp;
						}
				}
		}
		printf("\nDescending order");
		for(i=0;i<5;i++)
		{	
				
				printf("\na[%d]=%d",i,a[i]);
		}
} 
