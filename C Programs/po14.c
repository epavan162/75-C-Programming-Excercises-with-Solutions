/*c program for arithmetic operation between two integers using switch*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int a,b;
	char op;
	printf("Enter the operation\n");
	scanf("%c",&op);	
 	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
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

