#include <stdio.h> 
void main()
{
    int i, num, odd_sum = 0, even_sum = 0;
    printf("Enter the num value\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all odd nums  = %d\n", odd_sum);
    printf("Sum of all even nums = %d\n",even_sum);
}