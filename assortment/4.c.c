#include<stdio.h>
main()
{
	int r,c;
	printf("\nEnter the raw of array :=");
	scanf("%d",&r);
	printf("\nEnter the column of array :=");
	scanf("%d",&c);
	
	int a[r][c],i,j,b[c][r];
	
	printf("\n\n==================================\n");
	
	printf("\nEnter the array elements ..:=");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\na[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}

	}
	
	printf("\n=====================\n");
	
	printf("\n  2nd array elements := \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");

	}
	
	printf("\n==================\n");
	
	printf("\n transpose mattrix elements := \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[j][i]=a[i][j];
		}
		printf("\n");
	}
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf(" %d ",b[i][j]);
		}
		printf("\n");
	}
		
}