/*c program for implementing register storage class
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
void storage()
{

	register int i= 1;
	printf("storage\n");
	printf("%d\n",i);
	printf("Register address: %u",&i);
	i++;
	printf("%d\n",i);
}

void main()
{
	register int i;
	printf("main\n");
	printf("Register address: %u",&i);
	storage();
	i=0;
	i++;
	printf("%d\n",i);
	storage();
}
