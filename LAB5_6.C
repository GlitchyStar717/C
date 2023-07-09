#include<stdio.h>
#include<conio.h>
void main()
{
	int i,fact=1,x;
	clrscr();
	printf("Enter an integer : ");
	scanf("%d",&x);
	if (x<0)
		printf("Factorial cant be calculated.");
	else if(x==0)
		printf("Factorial is 0.");
	else
	{
		for(i=1;i<=x;i++)
			fact*=i;
		printf("The factorial is : %d",fact);
	}
	getch();
}