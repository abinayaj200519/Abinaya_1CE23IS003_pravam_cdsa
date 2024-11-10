#include <stdio.h>
struct s1{
    int a;
    char b;
};
int main() {
    printf("%d",sizeof(struct s1) );
    return 0;
}
