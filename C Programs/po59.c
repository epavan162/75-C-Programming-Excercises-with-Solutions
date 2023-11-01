/*c program for subtraction of two numbers using function
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
int diff(int,int);
void main()
{
			int a,b,result;
			printf("a=?\nb=?");
			scanf("%d%d",&a,&b);
			result=diff(a,b);
			printf("diff=%d",result);
}
int diff(int x,int y)
{		
		return(x-y);
}
