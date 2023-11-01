/*c program to find the seller has made progit or loss*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/

#include<stdio.h>

void main()
{
	/*Declaration of Variables*/
	int cp,sp;
	int profit,loss;
	
	/*Input*/
	printf("Enter the values of cp,sp");
	scanf("%d%d",&cp,&sp);

	/*Program Logic*/
	if(sp>cp)
	{
		profit=sp-cp;
		printf("seller has %dRupees profit \n",profit);

	}
	else
	{
		if(sp<cp)
		{
			loss = cp-sp;			
			printf("seller has %dRupees loss \n",loss);
		}
		else
		{
				printf("seller has no loss and no profit\n");
		}
	}
}
	
