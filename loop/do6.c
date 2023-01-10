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
 
	do
	{
        if(n%2 == 0)
			printf("%d ",n);
		n++;
	}
	while(n<=i);
getch();

}
