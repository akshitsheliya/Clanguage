#include <stdio.h>
#include <conio.h>

main()
{
    char ch;
    clrscr();
    printf("ENTER A NUMBER,WORD OR SPECIAL CHARACTER:---");
    scanf("%c",&ch);

    if((ch >= 'a') && (ch<='z') || (ch>='Z') && (ch<='Z'))
    {
	printf("THIS IS A ALPHABET");
    }
    else if ((ch>='0') && (ch<='9'))
    {
	printf("THIS IS A NUMBER");
    }
    else
    {
	printf("THIS IS A SPECIAL CHARACTER");
    }
    getch();
}
