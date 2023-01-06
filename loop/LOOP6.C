#include <stdio.h>
#include<conio.h>
main()
{

	int n,i;
	clrscr();
    n=1;

	printf("Enter the value of N: ");
	scanf("%d",&i);

	printf("even Numbers from 1 to %d:\n",i);

	while(n<=i)
	{
	if(n%2 == 0)
			printf("%d ",n);
		n++;
	}

	getch();
}
