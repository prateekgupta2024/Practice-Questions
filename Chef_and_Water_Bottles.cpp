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
        int n,x,k,u;
        cin>>n>>x>>k;
        u=k/x;
        if(u>n)
        cout<<n<<endl;
        else
        cout<<u<<endl;
    }
    return 0;
}
