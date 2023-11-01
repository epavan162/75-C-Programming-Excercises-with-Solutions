/*c program for arithmetic operation between two integers using switch*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int a,b;
	char op;
	printf("enter 2 values");
	scanf("%d%d%*c",&a,&b);
	printf("Enter the operation");
	scanf("%c%[^\n]",&op);	
 	
	switch(op)
	{
	case '+':printf("Result=%d\n",a+b);
		break;
	case '-':printf("Result=%d\n",a-b);
		break;
	case '/':printf("Result=%d\n",a/b);
		break;
	case '%':printf("Result=%d\n",a%b);
		break;
	case '*':printf("Result=%d\n",a*b);
		break;
	default:printf("Wrong operation");
		break;
	}
	
}

