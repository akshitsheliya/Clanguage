#include <stdio.h>
#include <conio.h>

main()
{
    int i,sum=0,n;
    clrscr();


    printf("ENTER THE VALUE of N : ");
    scanf("%d",&n);



    for (  i=1; i<=n ;)


     {
	printf("%d\n",i);
	sum=sum+i;
	i++;
      }

      printf("sum:- %d", sum);


    getch();
}
