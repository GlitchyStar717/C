#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("Enter the day number : ");
	scanf("%d", &x);
	if (x==1)
		printf("Sunday");
	else if (x==2)
		printf("Monday");
	else if (x==3)
		printf("Tuesday");
	else if (x==4)
		printf("Wednesday");
	else if (x==5)
		printf("Thursday");
	else if (x==6)
		printf("Friday");
	else if (x==7)
		printf("Saturday");
	else
		printf("Enter a valid day number");
	getch();
}