/*C programme to Compares two strings
PIN-18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	
	char name1[30];
	char name2[30];
	int i;

	printf("please Enter the name1 : ");
	scanf("%s",&name1);

	printf("please Enter the name2 : ");
	scanf("%s",&name2);
	
	i=strcmp(name1,name2);
	printf("name1 string is : %s\n",name1);
	printf("name2 string is : %s\n",name2);
	printf("%d\n",i);
	
}
