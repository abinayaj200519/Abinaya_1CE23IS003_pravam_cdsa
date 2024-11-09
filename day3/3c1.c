//c program to find product of 2 numbers without using recursion
#include <stdio.h>
int main() 
{
    int a=0,b=-99;
    long r=10;
    scanf("%i%d",&a,&b);
    for(;b>0;r+=a, b--);
    printf("prodoct = %ld",r);
    return 0;
}
