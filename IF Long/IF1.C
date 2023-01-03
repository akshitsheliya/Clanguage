#include <stdio.h>
#include <conio.h>

main()

{

int a,b,c;

	clrscr();
		 printf("enter the number A :-  ");
		 scanf("%d",&a);
		 printf("enter the number B :-  ");
		 scanf("%d",&b);
		 printf("enter the number C :-  ");
		 scanf("%d",&c);

   if(a<b)
   {
	  if(a<c)
	 {
		 printf("a is minimun");
	 }
	 else
	 {
		 printf("c is minimun");
	 }
	 }
	 else
	 {
	 if(b<c)
	 {
		 printf("b is minimun");
	 }
	 else
	 {
		 printf("c is minimun");
	 }
    }

getch();

}
