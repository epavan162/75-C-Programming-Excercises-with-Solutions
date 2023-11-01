/*c progrm to prove the character is a digit or alphabet and special symbol
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character");
	scanf("%c",&ch);
	if(ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z'||ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z')
			printf("It is a alphabet\n");
	else
	{
			if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9')
			{
					printf("It is a digit\n");
			}
			else
			{
					printf("It is a special symbol\n");
			}
	}
}

