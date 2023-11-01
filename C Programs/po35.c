/*c program to find youngest of the three persons*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main() 
{
	/*Decleration of variables*/
	int rm,sm,aj;

	/*Input*/
	printf("Enter the ages of Ram,Shyam and Ajay");
	scanf("%d%d%d",&rm,&sm,&aj);
	
	/*Program logic*/	
	if(rm>sm)
	{
		if(rm>aj)
		{
			printf("Ram is youngest,Ram age is %d\n",rm);
		}
		else
		{
			printf("Ajay is youngest,Ajay age is %d\n",aj);
		}
	}
	else
	{
		if(sm>aj)
		{
			printf("Shyam is youngest,Shyam age is %d\n",sm);
		}
		else
		{
			printf("Ajay is youngest,Ajay age is %d\n",aj);
		}
	}
}
