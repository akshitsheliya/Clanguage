 
#include <stdio.h>
 

void readArray(int arr[], int size) 
{ 
    int i =0; 
 
    printf("\nEnter elements : \n"); 
    for(i=0; i<size; i++) 
    { 
        printf("Enter arr[%d] : ",i); 
        scanf("%d",&arr[i]); 
    } 
} 
 
 

int getSum(int arr[], int size) 
{ 
    int i=0,sum=0; 
 
    for(i=0; i<size; i++) 
    { 
        sum += arr[i]; 
    } 
    return sum; 
} 
 
/** funtion :   getProduct() 
    input   :   arr ( array of integer ), size 
    to get product of all elements of array. 
**/
int getProduct(int arr[], int size) 
{ 
    int i=0,product=1; 
 
    for(i=0;i < size; i++) 
    { 
        product *= arr[i]; 
    } 
      
    return product; 
} 
 
int main() 
{ 
    int arr[10]; 
 
    readArray(arr,10); 
      
    printf("\nSum of array is     : %d"  , getSum    (arr,10)   ); 
    printf("\nProduct of array is : %d\n", getProduct(arr,10)   ); 
 
     
}
