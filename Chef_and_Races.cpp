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
        int c=0,x,y,a,b;
        cin>>x>>y>>a>>b;
        if(a!=x && a!=y)
        c++;
        if(b!=x && b!=y)
        c++;
        cout<<c<<endl;

    }
    return 0;
}
