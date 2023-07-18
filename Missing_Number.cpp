#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
    ll n;
    cin>>n;
    ll arr[n-1];
    ll s=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        s+=arr[i];
    }
    cout<<((n*(n+1))/2)-s<<endl;
   

    return 0;
}
