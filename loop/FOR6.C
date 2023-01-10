#include <stdio.h>
#include <conio.h>

main()
{
    int i,n;
    clrscr();
    n=1;

    printf("ENTER THE VALUE of N : ");
    scanf("%d",&i);

    printf("odd number from 1 to %d:\n",i);

    for (  n=1; n<=i ;)


     {
	printf("%d\n",n);
	n++;
      }


    getch();
}
