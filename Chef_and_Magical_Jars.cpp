#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],i,s=0;
        for(i=0;i<n;i++)
        {
        cin>>arr[i];
        s+=arr[i];}
        cout<<s-n+1<<endl;
    }
    return 0;
}
