/*c program to check vowels or consonents*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':printf("It is a vowel\n");
		break;
	default:printf("It is a consonent\n");
		break;
	}
}
