/*C programme to copies a string into another
PIN-18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	
	char name1[30];
	char name2[30];

	printf("please Enter the name1 : ");
	scanf("%s",&name1);

	strcpy(name2, name1);
	printf("name1 string is : %s\n",name1);
	printf("name2 string is : %s\n",name2);
	
}
