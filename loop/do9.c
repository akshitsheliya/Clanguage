#include<stdio.h>
#include<conio.h>

main()
{
    int n,i,f;
clrscr();

    i=1;
    f=1;
    printf("\n Enter The Number:");
    scanf("%d",&n);
     

    do
    {
        f=f*i;
        i++;
    
    printf("The Factorial of %d is %d\n",n,f);
    }
    while(i<=n);
getch();

}
