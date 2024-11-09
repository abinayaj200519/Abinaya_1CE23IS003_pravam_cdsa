#include<stdio.h>   
int main()  
{  
    int a, b, big;  
    printf("Enter 2 numbers\n");  
    scanf("%d%d", &a, &b);  
    (a > b) ? (big = a) : (big = b);  
    printf("Biggest of %d and %d is %d\n", a, b, big);  
    return 0;
}