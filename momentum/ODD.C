#include<stdio.h>
#include<conio.h>

main()
{
    int a;
    clrscr();

    printf("ENTER A NUMBER---");
    scanf("%d",&a);

    if(a % 2==0)
    {
    printf("%d is a even number\n",a);
    }
    else
    {
    printf("%d is a odd number\n",a);
}
getch();
}
