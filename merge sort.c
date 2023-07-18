#include <stdio.h>
#include <conio.h>

void merge(int b[],int lb,int mid,int ub,int c[])
{
    int i=lb,j=mid+1,k=lb;
    int n=sizeof(b)/sizeof(b[0]);
    while(i<mid && j<ub)
    {
        if(b[i]<=b[j])
        {
            c[k]=b[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    else
    {
        while(i<=mid)
        {
            c[k]=b[i];
            k++;i++;
        }
    }
    for(i=0;i<n;i++)
    {
        b[i]=c[i];
    }
}

void ms(int b[],int lb,int ub)
{
    int n=sizeof(b)/sizeof(b[0]);
    int mid=(ub+lb)/2,c[n];
    if(mid>ub)
    {
        return;
    }
    ms(lb,mid,b);
    ms(mid+1,ub,b);
    merge(b,lb,mid,ub,c);
}



int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    ms(b,0,n-1);
}