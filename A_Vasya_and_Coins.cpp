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
        int a,b;
        cin>>a>>b;
        if(a>0)
        {
            cout<<a+b*2+1<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}
