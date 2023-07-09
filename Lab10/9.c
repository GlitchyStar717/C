#include<stdio.h>
void main()
{
    char str[50],letters[26];
    int count,i,j,k,already;
    printf("Enter a string : ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        already=0;
        count=0;
        for(j=0; j<i;j++)
        {
            if(str[j]== str[i])
                already = 1;
        }
        if(already != 1)
        {
            for(j=i;str[j]!='\0';j++)
            {
                if(str[i]==str[j])
                    count++;
            }
            printf("%c repeats %d times.\n",str[i],count);
        }
    }
}