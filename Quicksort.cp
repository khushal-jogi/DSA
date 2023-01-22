#include<stdio.h>

int quicksort (int a[],int lb,int ub)
{
    int pivot,temp,start,end;
    pivot=lb;
    start=lb;
    end=ub;
    
    if (lb<ub)
    {
        while (a[start]<=a[pivot])
        {
            start++;
        }
        
        while(a[end]>a[pivot])
        {
            end--;
        }
        
        if(start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
     
     
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    quicksort(a,lb,end);
    quicksort(a,end+1,ub);
}

}



int main()
{
    int a[]={7,6,10,5,9,2,1,15,7};
    quicksort(a,0,8);
    
    for(int i=0;i<9;i++)
    {
    printf("%d\t",a[i]);
    }
}
