#include<stdio.h>
#include<string.h>
char reverse(char str[], int i, int len, char ulto[])
{
    if(i >= len)
    {
        // ulto[i]='\0';
        return '\0';
    }
    else
    {
        ulto[i]=str[len-1-i];
        i++;
        return reverse(str,i,len,ulto);
    }
}
void main()
{
    char str[50],ulto[50];
    int i=0,len;
    printf("Enter a string : ");
    scanf("%s",str);
    len = strlen(str);
    reverse(str,i,len,ulto);
    printf("%s",ulto);

}