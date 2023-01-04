#include<stdio.h>
#include<conio.h>

main()
{
 int a,b,c;
 clrscr();
	   printf("enter the number A :- ");
	   scanf("%d",&a);
	   printf("enter the number B:- ");
	   scanf("%d",&b);
	   printf("enter the number C :- ");
	   scanf("%d",&c);


	(a==b && b==c)
		? printf("all values are same... ")
		: (a==b)
			? printf("A and B are same... ")
			: (b==c)
				? printf("B and C are same... ")
				: (a==c)
					? printf("A and C are same... ")
					: (a>b)
					       ? (a>c)
						      ? printf("A is max... ")
						      : printf("B is max... ")

						: (b>c)
						      ? printf("B is max... ")
						      : printf("C is max... ");


 getch();

}