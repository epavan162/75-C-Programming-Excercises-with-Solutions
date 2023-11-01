/*c program for addition of two numbers using function
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
int sum(int,int);
void main()
{
			int a,b,result;
			printf("a=?\nb=?");
			scanf("%d%d",&a,&b);
			result=sum(a,b);
			printf("sum=%d",result);
}
int sum(int x,int y)
{		
		return(x+y);
}
