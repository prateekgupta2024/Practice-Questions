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
        int n,o=0,e=0,w=0,s=0,q=0;
        cin>>n;
        int k=n+1,x=n+1,p;
        while(n>0)
        {
            s=n%10;
            w+=s;
            n=n/10;
        }
        while(k>0)
        {
            int p=k%10;
            q+=p;
            
            k=k/10;
        }
        if(w%2==0 && q%2==0)
        cout<<x+1<<endl;
        else if(w%2==1 && q%2==1)
        cout<<x+1<<endl;
        else
        cout<<x<<endl;
        
    }
    return 0;
}