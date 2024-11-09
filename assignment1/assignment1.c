//C program for recursive function to solve power and exponant
#include <stdio.h>
int power(int n1, int n2);
int main() {
    int base, a, result;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter power number(positive): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}
int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
    return 1;
}


//Input: The program prompts the user to enter a base number (base) and an exponent (a).

//Recursive Power Calculation: The power function computes the result by recursively multiplying the base by itself, reducing the exponent by 1 in each recursive call until the exponent becomes 0. When the exponent is 0, the function returns 1 (base case).

//Output: The result, base^a, is then printed.
