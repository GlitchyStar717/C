#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=0,b=1,c;
	clrscr();
	for (i=0;i<10;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
}