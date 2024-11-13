#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a hexadecimal number: ");
    scanf("%x",&num);

    printf("%5d\n",num);  
    printf("%5o\n",num);  
    printf("%5X\n",num); 
    return 0;
}