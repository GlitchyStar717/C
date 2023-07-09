#include<stdio.h>
#include<string.h>
void operation(char str[100], int *longest, int *vowel, int *consonant, char words[20][20])
{
    int i=0,j=0,k=0,len;
    while(str[i]!='\0')
    {
        while(str[i]!=' ' && str[i]!='\0')
        {
            words[k][j]=str[i];
            i++;
            j++;
        }
        words[k][j]='\0';
        k++;
        i++;
        j=0;
    }
    words[k][j]='\0';
    *longest=0;
    for( k = 0 ; words[k][j]!='\0' ; k++)
    {
        if(strlen(words[*longest])<strlen(words[k]))
            *longest=k;
    }

    len = strlen(words[*longest]);
    for(i=0;i<len;i++)
    {
        if(words[*longest][i] == 'a' || words[*longest][i] == 'e' || words[*longest][i] == 'i' || words[*longest][i] == 'o' || words[*longest][i] == 'u' )
            *vowel += 1;
        else
            *consonant += 1;
    }

}
void main()
{
    int l=0,v=0,c=0;
    int *longest = &l;
    int *vowel = &v;
    int *consonant = &c;
    char str[100],words[20][20];
    printf("Enter a sentence: ");
    gets(str);
    operation(str,longest,vowel,consonant,words);

    printf("%s",words[*longest]);

    printf("\n\nNO of vowel and consonant are : %d and %d respectiely. ", *vowel, *consonant);
}