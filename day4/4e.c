// C program to read swap 2 numbers where n is the first num and m is the second num?
#include <stdio.h>
int main() {
    int n,m;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Before swapping:\n");
    printf("n = %d\n", n);
    printf("m = %d\n", m);
    n=n+m;
    m=n-m;
    n=n-m;  
    printf("After swapping:\n");
    printf("n = %d\n", n);
    printf("m = %d\n", m);
    return 0;
}