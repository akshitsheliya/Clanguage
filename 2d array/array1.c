#include<stdio.h>

main()
{
    int r,c;
    
    printf("enter row size\n");
    scanf("%d",&r);
    printf("enter column size\n");
    scanf("%d",&c);
    
    int a[r][c];
    
    int i,j;
    
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
        }
    printf("\n");
    }
    
}
