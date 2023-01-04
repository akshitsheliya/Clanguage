#include<stdio.h>
#include<conio.h>

main()
{
 int a,b;
 clrscr();
	   printf("enter the number A :- ");
	   scanf("%d",&a);
	   printf("enter the number B:- ");
	   scanf("%d",&b);

	(a==b)
		? printf("all values are same... ")
		: (a==b)

				? printf("A and C are same... ")
				: (a>b)
					      ? printf("A is max... ")
					      : printf("B is max... ");



 getch();

}