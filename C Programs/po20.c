/*c program to print weeks by using if else  statement*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{	
	int day;
	printf("Enter a day");	
	scanf("%d",&day);
	if(day==1)
	{
		printf("Sunday\n");
	}
	else
	{
		if(day==2)
		{
			printf("Monday\n");
		}
		else
		{
			if(day==3)
			{
				printf("Tuesday\n");
			}
			else
			{
				if(day==4)
				{
					printf("Wednessday\n");
				}
				else
				{
					if(day==5)
					{
						printf("Thursday\n");
					}
					else
					{
						if(day==6)
						{
							printf("Friday\n");
						}
						else
						{
							if(day==7)
							{
								printf("Saturday\n");
							}
							else
							{
								printf("wrong day");
							}
						}
					}
				}
			}
		}
	}
}

	
		
		
		
