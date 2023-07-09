#include<stdio.h>
void main()
{
    int i,j,len=0;
    char a[15]="Programming";
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;i<6;i++)
    {
        for(j=i;j<=(len-i-1);j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
}