#include <stdio.h>

int main() {
    int x=-99,*ptr=&x;
    printf("value of var is %d add of var is %p",x,&x);
    printf("tar value of ptr is %d tar add of ptr is %p ptr add of ptr is %p",*ptr,ptr,&ptr);
    return 0;
}
