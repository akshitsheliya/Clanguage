#include <stdio.h>
#include <conio.h>


main()
{
  int p,s=0;
clrscr();

  printf("\n Please Enter any number\n");
  scanf("%d", &p);

  while(p > 0)
  {
     p = p / 10;
     s = s + 1;  
  }
  printf("\n Number of Digits in a Given Number = %d", s);
getch();
}
