#include<stdio.h>
#include<conio.h>

main()
{
	char choice;
	int prefs;
	clrscr();

	printf("press M for gujarati \n");
	printf("press B for hindi \n");
	printf("press G for englsih \n");

	printf("\nEnter your choice:-  ");
	scanf("%c",&choice);

	switch(choice)
	{
		case 'M':

			printf("gujararti launguage\n");
			printf("press 1 number chlau karava mate  \n");
			printf("press 2 recharge karava mete \n");
			printf("press 3  number bandh karava mate  \n");

			printf("enter your choice:- ");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 1:
					printf(" number chlau karava mate");
					break;
				case 2:
					printf("  recharge karava mete");
					break;
				case 3:
					printf(" number bandh karava mate ");
					break;
			      default:
					printf(" invalid choice");
					break;
			}
			break;
		case 'B':

			printf("hindi launguage\n");
			printf("press 1 number chlau rakhne k liye  \n");
			printf("press 2 recharge karavane k liye \n");
			printf("press 3  number bandh rakhne k liye  \n");

			printf("enter your choice:- ");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 1:
					printf(" number chlau rakhne k liye");
					break;
				case 2:
					printf("  recharge karavane k liye");
					break;
				case 3:
					printf(" number bandh rakhne k liye ");
					break;
			      default:
					printf(" invalid choice");
					break;
			}
			break;
		case 'G':

			printf("english launguage\n");
			printf("press 1 to continue the number  \n");
			printf("press 2 to recharge \n");
			printf("press 3  to keep the number closed  \n");

			printf("enter your choice:- ");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 1:
					printf(" to continue the number ");
					break;
				case 2:
					printf(" for  recharge ");
					break;
				case 3:
					printf("  to keep the number closed ");
					break;
			      default:
					printf(" invalid choice...");
					break;
			}
			break;

			  default:
					printf(" invalid choice... ");
					break;
}
getch();
}


