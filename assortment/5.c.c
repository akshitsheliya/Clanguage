#include<stdio.h>
main()
{
	int r,c;
	printf("\nEnter the raw of array :=");
	scanf("%d",&r);
	printf("\nEnter the column of array :=");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0;
	
	
	
	printf("\n  enter the array elements ..:=");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\na[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}

	}
	
	printf("\n=======\n");
	
	printf("\n  2nd array elements := \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");

	}
	
	printf("\n==================================\n");
	
	printf("\n   Diagonal elements := \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				printf(" %d ",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");

	}
	
	printf("\n\n=================\n\n");
	printf("sum of diagonal elements := %d",sum);
	
	

}