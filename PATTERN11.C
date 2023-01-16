#include<stdio.h>
#include<conio.h>
main()
{
     int i,j,n = 5;
     clrscr();

      for(i=n;i>=1;i--)
      {
	   for(j=1;j<=i;j++)
	   {
		if (i%2 == 0)
		{
		if (j%2==0)

		printf("1");
	else
		printf("0");

	}
	else
	{
		if (j%2==0)

		printf("0");
	else
		printf("1");
	}
		}
		printf("\n");
		}

getch();

}
