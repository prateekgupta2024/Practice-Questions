#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
    ll n,m,k,i,j;
    cin>>n>>m>>k;
    ll arr[n],brr[m],c=0;
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<m;i++)
    cin>>brr[i];
    sort(arr,arr+n);
    sort(brr,brr+m);
    i=0;j=0;
    while(i<n && j<m)
    {
        if(abs(arr[i]-brr[j])<=k)
        {
            i++;
            j++;
            c++;
        }
        else if(arr[i]>brr[j])
        j++;
        else
        i++;
    }
    cout<<c<<endl;

    return 0;
}
