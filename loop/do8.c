#include<stdio.h>
#include<conio.h>

main()
{
    int i,sum;
clrscr();
    sum=0;
    i=1;
    do
    {
        printf("%d\n",i);
        i++;
        sum=sum+i;
    }
    while(i<=10);
getch();
}
