#include<stdio.h>
void foo();
void bar(int );

int main()
{
    void (*p)()=&foo;
    printf("Start of Main\n");
    p();
    bar(12);
    bar(1);
    p();
    printf("\nend of Main\n");
    return 0;
}
void foo()
{
    printf("\nfoo func\n");
}
void bar(int x){
    printf("\nbar func %d\n",x);
}