#include<stdio.h>
#include<conio.h>
void main()
{
	unsigned int a;
	clrscr();
	printf("Enter a integer : ");
	scanf("%u)",&a);
	if (a%2==0)
	{
		printf("The number is even and ");
		if  (a>100)
			printf("greater than 100.");
		else
			printf("less than 100.");
	}
	else
	{
		printf("The number is odd and ");
		if(a%11==0)
		{
			printf("divisible by 11 and ");
			if( a%7!=0)
				printf("not by 7");
			else
				printf("by 7");
		}
		else
		{
			printf("not divisible by 11 and ");
			if(a%7!=0)
				printf("nor divisible by 7.");
			else
				printf("divisible by 7.");
		}
	}
	getch();
}

