#include<stdio.h>
#include<conio.h>
void main()
{
	unsigned x,i;
	clrscr();
	printf("Enter an integer : ");
	scanf("%u",&x);
	for(i=1;i<=x;i++)
		printf("%u\n",i);
	printf("\n");
	for(i=x;i>=1;i--)
		printf("%u\n",i);
	getch();
}