/*c program for implementing auto storage class
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
void storage()
{
		auto int i=1;
		printf("storage\n");
		printf("%d\n",i);
		i++;
		printf("%d\n",i);
}
void main()
{
		auto int i;
		printf("main\n");
		storage();
		i=0;
		i++;
		printf("%d\n",i);
		storage();
}

