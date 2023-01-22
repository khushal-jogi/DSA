#include<stdio.h>

void merge(int a[],int lb,int mid,int ub)
{
    int i,j,k,b[9];
    i=lb;
    j=mid+1;
    k=lb;
    
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
       
    } 
        else
        {
            while(i<=mid)
            {
                b[k]=a[i];
                i++;
                k++;
            }
        }
    
    
    for(k=lb;k<=ub;k++)
    {
        a[k]=b[k];
    }
}


void mergesort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid;
        mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}

int main()
{
    int a[]={15,5,24,8,1,3,16,10,20};
    mergesort(a,0,9);
    
    for(int i=0;i<9;i++)
    {
    printf("%d\t",a[i]);
    }
    return 0;
}

