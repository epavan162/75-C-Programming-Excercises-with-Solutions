/*c program to print student marks using arrays*/
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
	for(i=0;i<6;i++)
	{
		printf("subject[%d]=%d\n",i,sub[i]);
	}
}
