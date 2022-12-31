#include<stdio.h>
#include<conio.h>

main()

{

    int s,hra,da,ta,TS;

    clrscr();

    printf("enter the base salary:-");
    scanf("%d",&s);
    hra=s*10/100;
    da=s*5/100;
    ta=s*8/100;
    TS=(s+hra+da+ta);

     printf("total salary :- %d\n",TS);

    getch();
}