/*c program for airthmetic operators*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the values of a,b");
 	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Additiopn of a,b is %d\n",c);
	c=a-b;
	printf("Substraction of a,b is %d\n",c);
	c=a*b;
	printf("Multiplication of a,b is %d\n",c);
	c=a/b;
	printf("Division of a,b is %d\n",c);
	c=a%b;
	printf("Modular division of a,b is %d\n",c);
}
