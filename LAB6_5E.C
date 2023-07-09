#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("Enter the no of terms : ");
	scanf ("%d",&n);
	for(i=1;i<=(n-1);i++)
		printf("1/%d, ",(2*i-1));
	printf("1/%d",(2*n-1));
	getch();
}