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
        ll n,k,a;
        cin>>n>>k;
        if(k==0)
        {
            a=n%4;
            if(a==0)
            cout<<"Off\n";
            else
            cout<<"On\n";
        }
        else
        if(n%4==0)
        cout<<"On\n";
        else
        cout<<"Ambiguous\n";


    }
    return 0;
}
