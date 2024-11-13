#include<stdio.h>
int main()
{
    int a[100],n=0,key=0,t=-1,low=0,high=0;
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]));
    scanf("%d",&key);
    high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("%d found at pos %d",key,mid+1);
            return 0;
        }
        else if(a[mid]>key)high=mid-1;
        else low=mid+1;
    
    }
    printf("\n%d not found\n",key);
    return 0;

}