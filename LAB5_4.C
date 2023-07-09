#include<conio.h>
#include<stdio.h>
void main()
{
	int i;
	unsigned x,sum=0;
	clrscr();
	printf("Enter any integer : ");
	scanf("%u",&x);
	for(i=1;i<=x;i++)
	{
		if (i%2==0)
			sum+=i;
	}
	printf("The sum is %u.",sum);
	getch();

}