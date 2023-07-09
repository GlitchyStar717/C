#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("Enter age : ");
	scanf ("%d", &age);
	if (age > 65)
		printf("Eligible for seniority allowance.");
	else
		printf("Not eligible for seniority allowance.");
	getch();
}