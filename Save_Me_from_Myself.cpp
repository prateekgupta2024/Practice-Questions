#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll n,f=0,c=0,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    if(i%2==0)
    f+=a[i];
    else
    f-=a[i];}
    c=-1*f;
    if(f>c)
    cout<<"Miserable Fool";
    else if(f<c)
    cout<<"Miserable Cool";
    else
    cout<<"Draw";

    return 0;
}
