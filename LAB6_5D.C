#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("Enter the no of terms: ");
	scanf("%d",&n);
	for(i=1;i<=(n-1);i++)
		printf("(%d^2+%d^2)/%d, ",i,(i+1),(i+1));
	printf("(%d^2+%d^2)/%d",n,(n+1),(n+1));
	getch();
}