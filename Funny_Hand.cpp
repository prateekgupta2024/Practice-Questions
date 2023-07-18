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
        int n,a,b;
        cin>>n>>a>>b;
        if(b-a==1 || a-b==1)
        {
            if(a==n || b==n)
            cout<<1<<endl;
            else if(a==1 || b==1)
            cout<<1<<endl;
            else 
            cout<<2<<endl;
        }
        else if(b-a==2 || a-b==2)
        {
            cout<<1<<endl;
        }
        else
        cout<<"0\n";
    }
    return 0;
}
