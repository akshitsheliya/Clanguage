#include<stdio.h>

main()
{
    int r,c;
    
    printf("enter row size\n");
    scanf("%d",&r);
    printf("enter column size\n");
    scanf("%d",&c);
    
    int a[r][c];
    float average;
    int i,j;
    int sum=0;
    
    printf("enter array element\n");
    
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("enter a[%d][%d]:--",i,j);
            fflush(stdin);
            scanf("%d",& a[i][j]);
        }
    }
    printf("\n\n\n-------------------\n\n\n");
    
    printf("enter array is:--\n\n\n");
    
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d",a[i][j]);
            
            sum=sum+a[r][c];
        }
    printf("\n");
    }
    
    for(r=0;r<i;r++)
  	{
   		sum =sum + a[r][i-r-1];
  	}
  	for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
 
 	printf("\n The Sum of cross Diagonal Elements =  %d", sum );
}
