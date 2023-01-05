#include<stdio.h>
#include<conio.h>

main()
{
	char choice;
	int prefs;
	clrscr();

	printf("press M for monday \n");
	printf("press T for tuesday \n");
	printf("press w for wednesday \n");
	printf("press t for thrusday \n");
	printf("press F for friday \n");
	printf("press S for saturday \n");
	printf("press s for sunday \n");

	printf("\nEnter your choice:-  ");
	scanf("%c",&choice);

	switch(choice)
	{
		case 'M':

			printf("monday\n");
			printf("press 1 good morning... \n");
			printf("press 2 good afternoon... \n");
			printf("press 3 good evening... \n");

			printf("enter your choice:- ");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 1:
					printf(" good morning... ");
					break;
				case 2:
					printf(" good afternoon...");
					break;
				case 3:
					printf("  good evening... ");
					break;
			      default:
					printf(" invalid choice");
					break;
			}
			break;

			case 'T':

			printf("tuesday\n");
			printf("press 1 good morning... \n");
			printf("press 2 good afternoon... \n");
			printf("press 3 good evening... \n");

			printf("enter your choice:- ");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 1:
					printf(" good morning... ");
					break;
				case 2:
					printf(" good afternoon...");
					break;
				case 3:
					printf("  good evening... ");
					break;
			      default:
					printf(" invalid choice");
					break;
			}
			break;
			case 'w':

			printf("wednesday\n");
			printf("press 1 good morning... \n");
			printf("press 2 good afternoon... \n");
			printf("press 3 good evening... \n");

			printf("enter your choice:- ");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 1:
					printf(" good morning... ");
					break;
				case 2:
					printf(" good afternoon...");
					break;
				case 3:
					printf("  good evening... ");
					break;
			      default:
					printf(" invalid choice");
					break;
			}
			break;
				case 't':

			printf("thrusday\n");
			printf("press 1 good morning... \n");
			printf("press 2 good afternoon... \n");
			printf("press 3 good evening... \n");

			printf("enter your choice:- ");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 1:
					printf(" good morning... ");
					break;
				case 2:
					printf(" good afternoon...");
					break;
				case 3:
					printf("  good evening... ");
					break;
			      default:
					printf(" invalid choice");
					break;
			}
			break;

				case 'F':

			printf("friday\n");
			printf("press 1 good morning... \n");
			printf("press 2 good afternoon... \n");
			printf("press 3 good evening... \n");

			printf("enter your choice:- ");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 1:
					printf(" good morning... ");
					break;
				case 2:
					printf(" good afternoon...");
					break;
				case 3:
					printf("  good evening... ");
					break;
			      default:
					printf(" invalid choice");
					break;
			}
			break;

				case 'S':

			printf("saturday\n");
			printf("press 1 good morning... \n");
			printf("press 2 good afternoon... \n");
			printf("press 3 good evening... \n");

			printf("enter your choice:- ");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 1:
					printf(" good morning... ");
					break;
				case 2:
					printf(" good afternoon...");
					break;
				case 3:
					printf("  good evening... ");
					break;
			      default:
					printf(" invalid choice");
					break;
			}
			break;

				case 's':

			printf("sunday\n");
			printf("press 1 good morning... \n");
			printf("press 2 good afternoon... \n");
			printf("press 3 good evening... \n");

			printf("enter your choice:- ");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 1:
					printf(" good morning... ");
					break;
				case 2:
					printf(" good afternoon...");
					break;
				case 3:
					printf("  good evening... ");
					break;
			      default:
					printf(" invalid choice");
					break;
			}
			break;

			  default:
					printf(" invalid choice... ");
					break;
}
getch();
}


