#include<stdio.h>
#include<string.h>
void main()
{
    int i=0,j=0,l1=0,l2=0;
    char a[100],temp[20],str[20];

    printf("Enter a sentence : ");
    gets(a);

    // while(a[i]!='\0')
    // {
    //     l2=0;
    //     j=0;
    //     while(a[i]!='\0'||a[i]!=' ')
    //     {
    //         temp[j]=a[i];
    //         i++;
    //         j++;
    //         l2++;
    //     }
    //     temp[j]='\0';
    //     if(l2>l1)
    //     {
    //         j=0;
    //         l1=l2;
    //         while(temp[j]!='\0')
    //         {
    //             str[j]=temp[j];
    //             j++;
    //         }
    //         str[j]='\0';

    //     }
    //     if(a[i]!='\0')
    //     {
    //         i++;
    //     }
    // }

    while(a[i]!='\0')
    {
        l2=0;
        j=0;
        while(a[i]!='\0'&&a[i]!=' ')
        {
            temp[j]=a[i];
            i++;
            j++;
            l2++;
        }
        temp[j]='\0';
        if(l2>l1)
        {
            j=0;
            l1=l2;
            while(temp[j]!='\0')
            {
                str[j]=temp[j];
                j++;
            }
            str[j]='\0';

        }
        if(a[i]!='\0')
        {
            i++;
        }
    }

    printf("The longest word is : ");
    puts(str);
}