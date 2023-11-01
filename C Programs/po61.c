/*c program for addition,subtraction and multiplication of two numbers using function
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
int sum(int,int);
int diff(int,int);
int mul(int,int);
void main()
{
			int a,b,result;
			printf("a=? b=?");
			scanf("%d%d",&a,&b);
			result=sum(a,b);
			printf("sum=%d\n",result);
			result=diff(a,b);
			printf("diff=%d\n",result);
			result=mul(a,b);
			printf("mul=%d\n",result);
}
int sum(int x,int y)
{		
		return(x+y);
}
int diff(int x,int y)
{
		return(x-y);
}
int mul(int x,int y)
{
		return(x*y);
}
