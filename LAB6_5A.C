#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter the no of terms : ");
	scanf("%d",&n);
	for (i=1;i<=(n-1);i++)
	{
		printf("%d, ",i);
	}
	printf("%d",n);
	getch();
}