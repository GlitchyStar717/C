#include<stdio.h>
#include<string.h>
#define max 3
// void capitalize(char str[])
// {
//     int i;
//     for(i=0;str[i]!='\0';i++)
//     {
//         if (str[i]> 'a' && str[i]<'z')
//             str[i]+='A'-'a';
//     }
// }
void sort(char names[max][15])
{
    int i,j;
    char tmp[15];
    for (i=0;i<max;i++)
    {
        for(j=(i+1);j<max;j++)
        {
            if(strcmp(names[i],names[j])>0)
            {
                strcpy(tmp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],tmp);
            }
        }
    }

    // for (i=0;i<max;i++)
    // {
    //     for (j=(i+1);j<max;j++)
    //     {
    //         if(strcmp(names[i],names[j])>0)
    //         {
    //             strcpy(tmp,names[i]);
    //             strcpy(names[i],names[j]);
    //             strcpy(names[j],tmp);
                
    //         }
    //     }
    // }
}


void main()
{
    char names[max][15];
    int i;
    for (i=0;i<max;i++)
    {
        printf("Enter name %d : ",(i+1));
        scanf("%s",names[i]);
    }
    sort(names);
    for (i=0;i<max;i++)
    {
        printf("Name %d : ",(i+1));
        printf("%s\n",names[i]);
    }
}