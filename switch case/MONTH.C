#include<stdio.h>
#include<conio.h>

void main()
{
    int choise;
    clrscr();


    printf("\n Enter The Month Number In 1 To 12 : ");
    scanf("%d",&choise);

    switch(choise)
    {
	case 1:
	 printf("Month is :  January, 31 dayzz");
		break;
	case 2:
	 printf("Month is :  February, 28/29 dayzz");
		break;
	case 3:
	 printf("Month is :  March, 31 dayzz");
		break;
	case 4:
	 printf("Month is :  April 30 dayzz");
		break;
	case 5:
	 printf("Month is :  May, 31 dayzz");
		break;
	case 6:
	 printf("Month is :  June, 30 dayzz");
		break;
	case 7:
	 printf("Month is :  July, 31 dayzz");
		break;
	case 8:
	 printf("Month is :  August, 31 dayzz");
		break;
	case 9:
	 printf("Month is :  September, 30 dayzz");
		break;
	case 10:
	 printf("Month is :  October,  31 dayzz");
		break;
	case 11:
	 printf("Month is :  November, 30 dayzz");
		break;
	case 12:
	 printf("Month is :  December,  31 dayzz");
		break;

default :
 printf("invalid number");

    }

    getch();
}