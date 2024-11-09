//c program to find n factorial using reccursion
#include<stdio.h>
long int Num(int n);
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, Num(n));
    return 0;
}
long int Num(int n) {
    if (n>=1)
        return n*Num(n-1);
    else
    return 1;
}