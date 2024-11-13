#include <stdio.h>
void mergeSort(int*,int ,int );
void merge(int*,int ,int ,int );

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printf("Given array is \n");
    for(int i=0;i<arr_size;printf("%d ",arr[i++]));
    mergeSort(arr, 0, arr_size - 1);
    printf("\nSorted array is \n");
    for(int i=0;i<arr_size;printf("%d ",arr[i++]));
    return 0;
}

void mergeSort(int *a,int l,int r ){
        if(l<r)
        {
                int mid = l+(r-l)/2;
                mergeSort(a,l,mid);
                mergeSort(a,mid+1,r);
                merge(a,l,mid,r);
        }
}

void merge(int *a,int l,int m,int r)
{
        int n1=m-l +1,n2=r-m;
        int ll[n1], rl[n2],i=0,j=0,k=0;
        
        for(int i=0;i<n1;i++)ll[i]=a[l+i];
        
        for(int i=0;i<n2;i++)rl[i]=a[m+1+i];
        i=j=0;
        k=l;
        while(i<n1&&j<n2)
        {
                if(ll[i]<=rl[j])
                        a[k++]= ll[i++];
                else
                        a[k++]=rl[j++];
        }
        while(i<n1){a[k++]=ll[i++];}
        while(j<n2){a[k++]=rl[j++];}
}