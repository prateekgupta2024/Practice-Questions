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
        int a,b,c,d;
        cin>>a>>b;
        c=a*10;
        d=b*5;
        if(c>d)
        cout<<"FIRST\n";
        else if(d>c)
        cout<<"SECOND\n";
        else
        cout<<"ANY\n";
    }
    return 0;
}
