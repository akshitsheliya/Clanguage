#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
       int num;

       printf("enter your age :- ");
       scanf("%d",&num);

       if(num<=0)
       {
	  printf("this number is zeero...");

       }
	else if (num>0)
	{
	     printf("this munber is positive...");

	}
	  else
	      {
		  printf("this number is negative...");
	       }

getch() ;
}