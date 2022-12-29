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


       sum=   (a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a);
      p("total %d",sum);
    getch();

}