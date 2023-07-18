#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    // your code goes here
    ll n;
    cin>>n;
    ll arr[n];
    set<ll> s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    cout<<s.size()<<endl;
    return 0;
}
