#include<stdio.h>
#include<conio.h>

main()
{

int i,j;
clrscr();

	for(i=1; i<=5 ;i++)
	{

		for(j=i ; j>=1 ; j--)
		{
			if(i % 2 == 1)
			{
			  printf("%d",i);
			}
			else
			{
				if(i % 2 == 0)
				{
				  printf("%d",i);
				}
				else
				{
				   printf("%d",j);
				}

			}


		}
		printf("\n") ;

	}

	getch();
 }