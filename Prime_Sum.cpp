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
        ll a,b;
        cin>>a>>b;
        if(a==1 || b==1)
        cout<<-1<<endl;
        else if(__gcd(a,b)==1)
        cout<<1<<endl;
        else
        cout<<0<<endl;
    }
    return 0;
}
