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
        if(n%4==1)
        cout<<n<<endl;
        else if(n%4==0)
        cout<<n+3<<endl;
        else
        cout<<3<<endl;
    }
    return 0;
}
