#include <stdio.h>
#include <conio.h>

main()
{
    int i,fact=1,n;
    clrscr();


    printf("ENTER THE VALUE of N : ");
    scanf("%d",&n);



    for (  i=1; i<=n ;)


     {
	printf("%d\n",i);
	fact=fact*i;
	i++;
      }

      printf("fact of %d is :- %d",n, fact);


    getch();
}
