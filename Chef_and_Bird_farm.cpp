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
        ll x,y,z;
        cin>>x>>y>>z;
        if(z%x==0 && z%y==0)
        cout<<"ANY\n";
        else if(z%x==0 && z%y!=0)
        cout<<"CHICKEN\n";
        else if(z%x!=0 && z%y==0)
        cout<<"DUCK\n";
        else
        cout<<"NONE\n";
    }
    return 0;
}
