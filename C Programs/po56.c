/*c program for implementing extern storage class
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
int i=0;//extern variable
void storage()
{
		
		printf("storage\n");
		printf("%d\n",i);
		i++;
		printf("%d\n",i);
}
void main()
{
		//extern int i=0
		printf("main\n");
		storage();
		i=0;
		i++;
		printf("%d\n",i);
		storage();
}
