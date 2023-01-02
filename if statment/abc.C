#include<stdio.h>
#include<conio.h>

main()

{

       int a,b,c;
       clrscr();

       printf("enter value of A :- ");
       scanf("%d",&a);

	printf("enter value of B :- ");
       scanf("%d",&b);

	printf("enter value of C:- ");
       scanf("%d",&c);


       if(a<b && a<c)
       {
	  printf(" A is smaller than",a);

       }
	else if (b>c)
	{
	     printf(" B is samller than",b);
	}
		else
	{
	     printf(" C is samller than",c);
	}


getch();

}