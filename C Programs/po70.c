/*C programme to convert a string to uppercase
PIN-18172-CM-002
E.PAVAN KALYAN*/ 
#include<stdio.h>
void main()
{
	
	char name[30];

	printf("please Enter the name : ");
	scanf("%s",&name);
	
	strupr(name);
	printf("%s",name);
}
