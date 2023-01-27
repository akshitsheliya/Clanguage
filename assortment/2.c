#include<stdio.h>

main()
{
	int n;
	int lrg,slrg,j;
	
	printf("Enter the array size :- ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
	     printf("a[%d]=",i);
		 scanf("%d",&a[i]);	
	}
	   printf("\n\n==========\n\n");
	   
	   
	   
	 for(i=0;i<n;i++)
	 {
	 	printf("a[%d]=%d\n",i,a[i]);
	 }
	lrg=0;
	 
	 for(i=0;i<n;i++)
      {
      	   if(lrg<a[i])
      	   {
      	   	lrg=a[i];
      	   	j=i;
			 }
	  }
	 slrg=0;
	 for(i=0;i<n;i++)
	 {
	 	if(i==j)
	 	{
	 		i++;
	 		i--;
		 }
		 
		 else
		 {
		 	if(slrg<a[i])
		 	{
		 		slrg=a[i];
			 }
		 }
	 }
	 printf("second largest elements in the array :%d\n",slrg);
}
	
	
	
	