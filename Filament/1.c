#include <stdio.h>
#include <string.h>


main()
{
    char a[20];
    int i, h;
    int l = 0;
    
    printf("Enter a string:");
    scanf("%s", a);
    
    h = strlen(a);
    
    for(i=0;i < h ;i++)
	{
        if(a[i] != a[h-i-1])
		{
            l = 1;
            break;
        }
    }
    
    if (l) 
	{
        printf("%s is not a palindrome", a);
    }    
    else
	 {
        printf("%s is a palindrome", a);
    }
}
