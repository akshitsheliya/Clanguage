#include<stdio.h>
#include<conio.h>

main()

{
      int a,b,c;
      clrscr();
       printf("enter the value of a:-");
       scanf("%d",&a);
       printf("enter the value of b:-");
       scanf("%d",&b);
       c=a;
       a=b   ;
       b=c    ;


       printf("addition is :- %d\n",a);
	printf("addition is :- %d\n",b);
    getch();

}