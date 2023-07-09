#include<stdio.h>
#include<conio.h>
void main()
{
	float x;
	clrscr();
	printf("Enter the value of x: ");
	scanf("%f",&x);
	if (x <=0 )
		printf ("0");
	else if (x<=10)
		printf ("%f",(x*(x-10)*(x-15)));
	else if (x<=15)
		printf ("%f",((x-10)*(x-15)*(x-20)));
	else if (x<=20)
		printf ("%f",((x-15)*(x-20)*(x-30)));
	else if (x<=30)
		printf ("%f",((x-20)*(x-30)*(x-40)));
	else
		printf ("0");
	getch();
}