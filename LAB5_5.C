#include<stdio.h>
#include<conio.h>
void main()
{
	int x, sum=0, fact=1,i;
	clrscr();
	printf("Enter an integer : ");
	scanf("%d",&x);
	for(i=1 ; i<=x ; i++)
	{
		sum+=i;
		fact*=i;
	}
	printf("The sum from 0-%d and 1-%d is %d and %d respectively.",x,x,sum,fact);
	getch();
}
