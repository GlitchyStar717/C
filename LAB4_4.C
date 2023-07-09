#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	printf ("Enter a character : ");
	scanf (" %c", &a);
	if (a>=65 & a<=90)
		printf("The character is uppercase.");
	else if(a>97 & a<122)
		printf("The character is lowercase.");
	getch();
}