#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n],s=0,i;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    s+=a[i];}
    cout<<s/n<<endl;

    return 0;
}
