/*c program for print reverse number*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int n,q,r,temp,rn;
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
	 printf("the reverse number of %d is %d\n",n,rn);

}
