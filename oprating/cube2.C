#include<stdio.h>
#include<conio.h>
#define p printf
#define c clrscr

main()
{
	int a,b,sum;

      c  ();

    p("value of a");
    scanf("%d",&a);
     p("value of b");
    scanf("%d",&b);

       sum=   (a*a*a)-(3*a*a*b)+(3*a*b*b)-(b*b*b)   ;
      p("total %d",sum);
    getch();

}