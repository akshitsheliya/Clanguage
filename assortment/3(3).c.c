#include<stdio.h>
main()
{
	int r,c;
	printf("\nEnter the raw of array :=");
	scanf("%d",&r);
	printf("\nEnter the column of array :=");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],sum[r][c],i,j;
	
	
	
	printf("\n   enter the first array elements ..:=");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\na[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}

	}
	
	printf("\n=============\n");
	
	printf("\nEnter 2nd array elements ..:=");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nb[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}

	}
	
	printf("\n=============\n");
	printf("\n 1st of array elements := \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");

	}
	
	printf("\n\n 2nd of array elements := \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",b[i][j]);
		}
		printf("\n");

	}
	
	printf("\n\nThe addition of two matrices :=\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf(" %d ",sum[i][j]);
		}
		printf("\n");

	}
		
	
}