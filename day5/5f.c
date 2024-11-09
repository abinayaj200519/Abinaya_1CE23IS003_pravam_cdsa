#include<stdio.h>

int main()
{
    int i=0,a[1000];
    scanf("%d",&i);
    for(int j=0;j<i;scanf("%d",&a[j++]));
    printf("\n");
    for(int j=0;j<i;j++)
    if(a[j]%5==0)
    printf("%d\n",a[j]);
    return 0;
}