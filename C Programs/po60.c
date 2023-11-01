/*c program for multiplication of two numbers using function
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
int mul(int,int);
void main()
{
			int a,b,result;
			printf("a=?\nb=?");
			scanf("%d%d",&a,&b);
			result=mul(a,b);
			printf("mul=%d",result);
}
int mul(int x,int y)
{		
		return(x*y);
}
