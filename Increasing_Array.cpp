#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void nov(ll arr[],ll n)
{
    ll i,c=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            c+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<c;
}

int main() {
    // your code goes here
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    nov(arr,n);

    return 0;
}
