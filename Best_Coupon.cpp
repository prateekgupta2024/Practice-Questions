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
        int x,a,b;
        cin>>x;
        a=0.1*x;
        b=100;
        if(a>b)
        cout<<a<<endl;
        else
        cout<<b<<endl;
    }
    return 0;
}
