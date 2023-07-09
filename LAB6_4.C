#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,x;
	clrscr();
	while (x!=0)
	{
		printf("Enter a number : ");
		scanf("%d",&x);
		printf("\n");
		if (x>0)
			sum+=x;
	}
	printf("The sum is : %d",sum);
	getch();
}