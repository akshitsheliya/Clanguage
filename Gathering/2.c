#include <stdio.h>

#define size(a)
int main()
{
    int a[] = {15, 12, 13, 10};
    int sum = 0;  
    int i = 0;
   
    int N = size(a);
   
    for(i = 0; i < N; i++)
    {
        sum += a[i];  
    }
    printf("\nSum = %d", sum);
 
}
