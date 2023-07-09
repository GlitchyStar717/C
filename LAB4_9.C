#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,r;
	char o;
	clrscr();
	printf("Enter first operand : ");
	scanf("%f",&a);
	printf("\nEnter operator : ");
	scanf(" %c",&o);
	printf("\nEnter second operand : ");
	scanf("%f",&b);
	if (o == '+')
		printf("%f",a+b);
	else if (o == '-')
		printf("%f",a-b);
	else if (o == '*')
		printf("%f",a*b);
	else if (o == '/')
	{
		if (b==0)
			printf("2nd operand cant be zero in case of division.");
		else
			printf("%f:", a/b);
	}
	else
		printf("Enter valid operator and operands.");
	getch();
}