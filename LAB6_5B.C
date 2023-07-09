#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter the no of terms : ");
	scanf("%d",&n);
	printf("s= ");
	for(i=2;i<=(2*n-2);i=i+2)
		printf("%d, ",i);
	printf("%d",(2*n));
	getch();
}