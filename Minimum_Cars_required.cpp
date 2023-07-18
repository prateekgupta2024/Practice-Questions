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
        int n,m;
        cin>>n;
        m=n%4;
        if(m==0)
        {
            cout<<n/4<<endl;
        }
        else
        {
            cout<<n/4 +1<<endl;
        }
    }
    return 0;
}
