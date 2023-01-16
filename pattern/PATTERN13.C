#include <stdio.h>
#include <conio.h>

main()

{
    int num = 5, i, j, t = 'A';

    clrscr();


    for (i = 1; i <= num; i++)
    {

	for (j = 1; j <= i; j++)
	{
	    printf(" %c", t);
	    t++;
	}

		printf( "\n");

		}

	getch();
}