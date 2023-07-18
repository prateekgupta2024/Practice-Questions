#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],i,c=1,r=0;
        for(i=0;i<n;i++)
        cin>>arr[i];
        if(n<=2)
        cout<<0<<endl;
        else{
        sort(arr,arr+n);
        for(i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            c++;
            if(c>r)
            r=c;
            if(arr[i]!=arr[i+1])
            c=1;
        }
        if(r==1)
        cout<<n-2<<endl;
        else
        cout<<n-r<<endl;}
    }
    return 0;
}
