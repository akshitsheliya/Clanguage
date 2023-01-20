#include<stdio.h>
#include<conio.h>
main()
{
     int i,j,n = 5;
     clrscr();

      for(i=1;i<=n;i++)
      {
	   for(j=i;j>=1;j--)
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
