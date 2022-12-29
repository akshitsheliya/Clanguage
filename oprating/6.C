#include<stdio.h>
#include<conio.h>
#define p printf


main()
{
	int a,b,c,sum;

      clrscr  ();

    p("value of a:-");
    scanf("%d",&a);
     p("value of b:-");
    scanf("%d",&b);
      p("value of c:-");
    scanf("%d",&c);


       sum=   (a*a*a)-(b*b*b)-(c*c*c)+(3*(a+b)*(b-c)*(c-a));
      p("total %d",sum);
    getch();

}