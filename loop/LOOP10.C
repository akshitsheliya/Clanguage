#include <stdio.h>
#include <conio.h>

 main()
 {

	 int n, i;
	 clrscr();

	 printf("Enter a table number :- ");
	 scanf("%d", &n);
	 i=1;
	while  (i<=10)
	 {
	 printf("%d * %d = %d\n", n,i,n*i);
				  i++;
	 }
  getch();
}