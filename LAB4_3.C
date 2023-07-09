#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c,s;
	float area;
	clrscr();
	printf("Enter the sides of the triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	if (a+b>c & b+c>a & c+a>b)
	{
		printf("Triangle is valid.");
		area =sqrt(s*(s-a)*(s-b)*(s-c));
		printf("\nArea of the triangle is : %f",area);
	}
	else
		printf("Traingle doesnot exist");
	getch();
}