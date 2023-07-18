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
        int s;
        cin>>s;
        if(s==0)
        cout<<"-1\n";
        else
        cout<<(s+1)*-1<<endl;
    }
    return 0;
}
