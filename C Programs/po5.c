/*c program for print weeks using switch*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int day;
	printf("Enter a day");
	scanf("%d",&day);
	switch(day)
	{
		case 0:printf("Sunday\n");
			printf("It is a holiday\n");
			break;
		case 1:printf("Monday");
			break;
		case 2:printf("Tuesday");
			break;
		case 3:printf("Wednessday");
			break;
		case 4:printf("Thursday");
			break;
		case 5:printf("Friday");
			break;
		case 6:printf("Saturday");
			break;
		default:printf("You entered wrong input");
	}
}
			
