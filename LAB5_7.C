#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,i,fact=1;
	float result,x;
	clrscr();
	printf("Enter the value of x and n : ");
	scanf("%f %d",&x,&n);
	for(i=1;i<=n;i++)
		fact*=i;
	result = pow(x,n)/fact;
	printf("The result is : %f",result);
	getch();
}