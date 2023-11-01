/*C programme to convert a string to lowercase
PIN NO:18172-CM-002
E.PAVAN KALYAN
PIN-18172-CM-007*/
#include<stdio.h>
void main()
{
	
	char name[30];

	printf("please Enter the name : ");
	scanf("%s",&name);
	
	strlwr(name);
	printf("%s",name);
}
