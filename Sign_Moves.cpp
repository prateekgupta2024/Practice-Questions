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
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<endl;
        }
        else
        cout<<"-"<<n/2+1<<endl;

    }
    return 0;
}
