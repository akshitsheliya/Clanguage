#include<stdio.h>

main()
{
  	int i;
  	char a[100];
  	
  	
  		printf("Enter a value :-");
  		gets(a);
  		
  		
  			printf("result of string :- \n");
  			
  			for(i=0 ; a[i]!=0 ; i++ )
 		 {
    		if( a[i]>=97 && a[i]<=122)
    		{
       			a[i]-=32;
    		}
    		else if( a[i]>=65 && a[i]<=90)
   			 {
       			a[i]+=32;
   			 }
  		}
  		
  					for( i=0 ;  a[i]!=0 ; i++)
 				 {
    						printf("%c",a[i]);
  					}
  
}
