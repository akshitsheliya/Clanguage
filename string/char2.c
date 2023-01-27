#include <stdio.h>


main()
{
  char a[100];
int i;
 
 
   
    printf("Enter value: ");
    gets(a);


    
    for(i=0; a[i]!=0; i++)
    {
 
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i] = a[i] + 32;
 
        }
 
    }

    printf("Lower case :- %s",a);
    
}
