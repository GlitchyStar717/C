#include<stdio.h>
#include<string.h>
void capitalize(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]> 'a' && str[i]<'z')
            str[i]+='A'-'a';
    }
}
void main()
{
    char str[50],tmp,copy[50],tmp2;
    int i,j,len;
    printf("Enter a string : ");
    scanf("%s",str);
    len = strlen(str);
    strcpy(copy,str);
    capitalize(copy);

    for (i=0;i<len;i++)
    {
        for (j=i;j<len;j++)
        {
            if(copy[i]>copy[j])
            {
                tmp = str[i];
                tmp2 = copy[i];
                str[i]=str[j];
                str[j]=tmp;
                copy[i]=copy[j];
                copy[j]=tmp2;
            }
        }
    }
    printf("The answer is : %s ",str);
}