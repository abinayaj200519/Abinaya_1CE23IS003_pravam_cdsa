#include<stdio.h>
int recBin(int *,int ,int ,int );

int main()
{
    int a[100],n=0,key=0,t=-1;
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]));
    scanf("%d",&key);
    t=recBin(a,key,0,n-1);
    if(t<0)printf("\n%d not found\n",key);
    else printf("%d found at pos %d",key,t+1);
    return 0;
}
int recBin(int *a,int key,int low,int high)
{
    int mid=(low+high)/2;
    if(low>high) return -1;
    else if(a[mid]==key) return mid;
    else if(a[mid]>key) return recBin(a,key,low,mid-1);
    else return recBin(a,key,mid+1,high);
}