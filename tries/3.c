#include<stdio.h>
void main()
{
    char a[50];
    int len=0,i=0,res=1;

    printf("Enter a string: ");
    gets(a);

    while(a[i]!='\0')
    {
        len++;
        i++;
    }
    for (i=0;i<=(len/2);i++)
    {
        if(a[i]!=a[len-i-1])
            res=0;
    }
    if(res==1)
        printf("String is palindrome");
    else   
        printf("String's not palindrome.");
}