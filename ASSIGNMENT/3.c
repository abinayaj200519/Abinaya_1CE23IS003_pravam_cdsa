#include <stdio.h>

void x(int n) 
{
    switch(n) {
        case 1: printf("one\n");
        break;
        case 2: printf("two\n"); 
        break;
        case 3: printf("three\n"); 
        break;
        case 4: printf("four\n"); 
        break;
        case 5: printf("five\n"); 
        break;
        case 6: printf("six\n"); 
        break;
        case 7: printf("seven\n"); 
        break;
        case 8: printf("eight\n"); 
        break;
        case 9: printf("nine\n"); 
        break;
    }
}

int main() 
{
    int a=0,b=0;
    scanf("%d %d",&a,&b);

    for (int n=a;n<=b;n++) 
    {
        if (n>=1 && n<=9) 
        {
            x(n);
        } 
        else if(n>9) 
        {
            if (n%2==0) 
            {
                printf("even\n");
            } 
            else 
            {
                printf("odd\n");
            }
        }
    }

    return 0;
}