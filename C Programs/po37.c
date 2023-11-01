/*c program to find the sum of marks in a unit test-1
PIN NO: 18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
		//Declaration of variables
		int e,m,p,c,b,cl,sum;

		//Input
		printf("Enter the marks in 6 subjects");
		scanf("%d%d%d%d%d%d",&e,&m,&p,&c,&b,&cl);
		
		//program logic
		sum=e+m+p+c+b+cl;
		printf("The sum of all subjects is %d\n",sum);
}

