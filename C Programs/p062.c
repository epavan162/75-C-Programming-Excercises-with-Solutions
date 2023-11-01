/*c program for swap two numbrs using functional call by reference
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
void swap(int*,int*);
void main()
{
			int a,b;
			printf("a= \nb= ");
			scanf("%d%d",&a,&b);
			printf("a=%d,b=%d\n",a,b);
			swap(&a,&b);
			printf("after swapping a=%d and b=%d",a,b);
}
void swap(int *x,int *y)
{
		int temp;
		temp=*x;
		 *x=*y;
		 *y=temp;
}
