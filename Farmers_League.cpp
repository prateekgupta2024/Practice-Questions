#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7

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
        if(n==2)
        cout<<3<<endl;
        else
        {
            if(n%2==1)
            cout<<3*(n-1)-3*((n-2)/2+1)<<endl;
            else
            cout<<3*(n-1)-3*((n-2)/2)<<endl;
        }
    }
    return 0;
}
