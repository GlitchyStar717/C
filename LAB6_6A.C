#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();
	printf("Enter the no of terms : ");
	scanf("%d",&n);
	for(i=2;i<=2*n;i+=2)
		sum+=i;
	printf("The sum of the series is %d.",sum);
	getch();
}