
#include <stdio.h>
#include <stdlib.h>
struct box
{
    int length,bredth,height;
};
typedef struct box box;

int get_volume(box b) {
    return b.length*b.bredth*b.height;
}
int is_lower_than_max_height(box b) {
    return b.height<41 ;
}
int main()
{
    int n=0;
    box *s=NULL;
    scanf("%i",&n);
    s=(box*)malloc(n*sizeof(box));
    for(int i=0;i<n;i++)
        scanf("%d %d %d",&s[i].length,&s[i].bredth,&s[i].height);
    for(int i=0;i<n;i++)
    {
        is_lower_than_max_height(s[i])?printf("%d\n",get_volume(s[i])): 0;
    }

    return 0;
}