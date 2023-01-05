#include<stdio.h>
#include<conio.h>

main ()

{

 int a,b,c,d;

  clrscr();

   printf("enter the number A :-  ");
   scanf("%d",&a);
   printf("enter the number B :-  ");
   scanf("%d",&b);
   printf("enter the number C :-  ");
   scanf("%d",&c);
   printf("enter the number D :-  ");
   scanf("%d",&d);


if(a>b)
    {
	if(a>c)
	{
	    if(a>d)
	    {
		printf("A is max");
	    }
	    else
	    {
		printf("D is max");
	    }
	}
	else
	{
	    printf("C is max");
	}
    }
else
    {
	if(b>c)
	{

	    if(b>d)
	    {
		printf("B is max");
	    }
	    else
	    {
		printf("D is max");
	    }
	}

    }

    {
	if(c>d)
	    {
		printf("c is max");
	    }
	    else
	    {
		printf("D is max");
	    }
	}



    getch();
}
