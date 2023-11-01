/*c program to find sum and average of a student using arrays*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int i,sub[6];
	int pn,sum,avg;
	printf("Enter your pin number");
	scanf("%d",&pn);
	for(i=0;i<6;i++)
	{
		printf("sub[%d] marks",i);
		scanf("%d",&sub[i]);
		
	}
	sum=0;
	for(i=0;i<6;i++)
	{
		sum=sum+sub[i];
		
	}
	printf("sum of all subjects is %d\n",sum);
	avg=sum/6;
	printf("The average of all subjects is %d\n",avg);
	
}
	
	 
	
	
	
		
	

	
