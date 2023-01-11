
#include <stdio.h>
#include <conio.h>


main()
{
    char ch = 'a';
clrscr();

    printf("Alphabets from a - z are: \n");
    do
    {
        printf("%c\n", ch);
        ch++;
    }
    while(ch<='z');
getch();
}
