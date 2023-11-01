/*c program to armstrong number*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int n,q,r,temp,am;
	printf("Enter the value of n");
	scanf("%d",&n);
	temp=n;
	am=0;
	while(temp>0)
	{
		q=temp/10;
		r=temp%10;
		am=am+r*r*r;
		temp=q;
	}
	if(am==n)
	{
	 printf("it is armstrong number\n");
	}
	else
	{
		printf("It is not armstrong number\n");
	}

}
