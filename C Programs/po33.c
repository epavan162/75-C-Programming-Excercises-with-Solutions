/*c program to determine  whether the character is a capital letter, a small case letter,a digit or a special symbol*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character ");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':printf("%c Is a Small case letter\n",ch);
		break;
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':printf("%c Is a Capital letter\n",ch);
		break;
	case '0':
	case '1':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':printf("%c Is a Digit\n",ch);
		break;
	default:printf("%c Is a Special Symbol\n",ch);
		break;
	}
}
