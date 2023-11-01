/*c program to find given number is palindrone or not*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int q,r,temp,n,rn;
	printf("Enter the value of n");
	scanf("%d",&n);
	temp=n;
	rn=0;
	while(temp>0)
	{
		q=temp/10;
		r=temp%10;
		rn=rn*10+r;
		temp=q;
	}
	printf("Reverse number of %d is %d\n",n,rn);
	if(rn==n)
	{
		printf("It is palindrone number\n");
	}
	else
	{
		printf("It is not palindrone number\n");
	}
}
