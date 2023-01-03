#include<stdio.h>
#include<conio.h>

main()

{

 int a,b,c,d,e;
 clrscr();

 printf("enter the number A :-  ");
   scanf("%d",&a);
   printf("enter the number B :-  ");
   scanf("%d",&b);
   printf("enter the number C :-  ");
   scanf("%d",&c);
   printf("enter the number D :-  ");
   scanf("%d",&d);
   printf("enter the number E :-  ");
   scanf("%d",&e);


 if(a>b && a>c &&  a>d && a>e)
  printf("A=%d  is maximum number", a);

 else
  if(b>c && b>d && b>e)
   printf("B=%d  is maximum number", b);

 else
  if(c>d && c>e)
   printf("C=%d  is maximum number", c);

 else
  if(d>e)
   printf("D=%d  is maximum number", d);

 else
  printf("E=%d  is maximum number", e);


 getch();

}