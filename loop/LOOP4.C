#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    clrscr();
    printf("ENTER A VALUE");
    scanf("%d",& i);

    n=1;
    while(n<=i)
    {
	printf("%d\n",i);
	i--;
    }
    getch();
}
