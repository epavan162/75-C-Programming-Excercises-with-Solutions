/*c program for implementing static storage class
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
void storage()
{
		static int i=1;
		printf("storage\n");
		printf("%d\n",i);
		i++;
		printf("%d\n",i);
}
void main()
{
		static int i;
		printf("main\n");
		storage();
		i++;
		printf("%d\n",i);
		storage();
}

