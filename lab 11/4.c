#include<stdio.h>
struct clock
{
    int hh;
    int mm;
    int ss;
}time[3];
void main()
{
    int i =0,min=0,hou=0;
    for(i=0;i<2;i++)
    {
        printf("Enter hour %d : ",i+1);
        scanf("%d", &time[i].hh);
        printf("Enter minute %d : ",i+1);
        scanf("%d", &time[i].mm);
        printf("Enter second %d : ",i+1);
        scanf("%d", &time[i].ss);
    }
    time[2].ss=(time[0].ss+time[1].ss)%60;
        min = (time[0].ss+time[1].ss)/60;
    time[2].mm=(time[0].mm+time[1].mm)%60 + min;
        hou = (time[0].mm+time[1].mm)/60;
    time[2].hh=(time[0].hh+time[1].hh)%24 + hou;
    printf(" hour : %d\n minute : %d\n second : %d", time[2].hh, time[2].mm, time[2].ss);
}