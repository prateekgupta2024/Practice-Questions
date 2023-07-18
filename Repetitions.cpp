#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
    string s;
    cin>>s;
    int c=1,n=s.size(),r=1;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
        else
        c=1;
        if(c>r)
        r=c;
    }
    cout<<r;


    return 0;
}
