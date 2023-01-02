#include<stdio.h>
#include<conio.h>

main()

{

       int a,b;
       clrscr();

       printf("enter value of A :- ");
       scanf("%d",&a);

	printf("enter value of B :- ");
       scanf("%d",&b);

       if(a<=b)
       {
	  printf("%d A is smaller",a);

       }
	else if (b>=a)
	{
	     printf("%d B is samller",b);
	}

getch();

}