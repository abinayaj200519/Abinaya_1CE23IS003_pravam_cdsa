//C program to find fibonacci of n number?
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("%dth Fibonacci num is: %d\n", n, fibonacci(n));
    }
    return 0;
}