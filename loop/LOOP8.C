#include<stdio.h>
#include<conio.h>

main()
{
	int i,sum=0,n;
	clrscr();

	printf("Enter the value of n :-  ");
	scanf("%d",&n);

	i=1;
	while(i<=n)

	{
		printf("%d\n",i);
		sum=sum+i;
		i++;

	}

	printf("sum:- %d",sum);
	getch();

}