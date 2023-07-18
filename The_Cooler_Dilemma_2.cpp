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
        int x,y;
        cin>>x>>y;
        if(y/x>0 && y%x==0)
        cout<<y/x-1<<endl;
        else
        cout<<y/x<<endl;
    }
    return 0;
}
