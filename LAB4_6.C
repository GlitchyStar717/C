#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,d,p1,p2,r1,r2;
clrscr();
printf("Enter the coefficients of quadratic equations : ");
scanf("%f%f%f",&a,&b,&c);
d = b*b-(4*a*c);
p1 = -b/2*a;
if (d==0)
	printf("The roots are same and = %f",p1);
else if (d>0)
{
	p2= sqrt(d)/2*a;
	r1 = p1+p2;
	r2 = p1-p2;
	printf("The roots are %f and %f",r1,r2);
}
else
{
	p2= sqrt(-d)/2*a;
	printf("The roots are %f + %fi and %f - %fi",p1,p2,p1,p2);
}
getch();
}