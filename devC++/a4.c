#include <stdio.h>
int main() {
    int Num[] = {7, 33, 13, 9, 29};

    size_t size = sizeof(Num) / sizeof(Num[0]);
  
    printf("The length of the array is %d \n", size);
}
