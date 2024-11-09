#include <stdio.h>
int main() {
    int numerator, denominator;
    float result;
    printf("Enter the numerator: ");
    scanf("%d", &numerator);
    printf("Enter the denominator: ");
    scanf("%d", &denominator);
    if (denominator == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        result = (float)numerator / denominator;
        printf("Result: %.2f\n", result);
    }
    return 0;
}