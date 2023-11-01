/*C program to print below 500 armstrong numbers
PIN NO:18172-CM-002
E.PAVAN KALYAN
*/
#include<stdio.h>
void main()
{

	int temp,n,q,r,am;

	for(n=1;n<500;n++)
	{

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

			printf("armstrong number is \n%d\n",am);

		}	
	}
	
}
		
	
