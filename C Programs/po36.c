/*c program to print CME branch student names and pin no
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{          
		//Declaration of variables
		int roll;
		
		//Input
		printf("Enter a roll number");
		scanf("%d",&roll);
		
		//Program logic
		switch(roll)
		{
			case 1:printf("NAME: D.PRAVEEN KUMAR\n");
					 printf("PIN NO: 18172-CM-001\n");
						break;
			case 2:printf("NAME: E.PAVAN KALYAN\n");
					 printf("PIN NO: 18172-CM-002\n");
						break;
			case 3:printf("NAME: J.SATYA PRAKASH\n");
					 printf("PIN NO: 18172-CM-003\n");
						break;
			case 4:printf("NAME: K.HARSHA VARDHAN\n");
					 printf("PIN NO: 18172-CM-004\n");
						break;
			case 5:printf("NAME: N.HARI KRISHNA\n");
					 printf("PIN NO: 18172-CM-005\n");
						break;
			case 6:printf("NAME: R.SEDDA REDDY\n");
					 printf("PIN NO: 18172-CM-006\n");
						break;
			case 7:printf("NAME: V.PAVAN KUMAR\n");
					 printf("PIN NO: 18172-cm-007\n");
						break;
			default:printf("SORRY\n");
					  printf("THANK YOU\n");
						break;
	}
}

