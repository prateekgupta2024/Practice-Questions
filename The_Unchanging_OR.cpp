#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int main() {
    // your code goes here
    int t,c,i;
    cin>>t;
    while(t--)
    {
        int n,a,c=-1,k=0,i=3;
        cin>>n;
        if(n==2)
        {
            cout<<0<<endl;
        }
        else if(n==3)
        {
            cout<<1<<endl;
        }
        else if(n==4)
        {
            cout<<1<<endl;
        }
        else
        {
        while(k<=n)
        {
            a = (int)(pow(2, i));
            k=a;
            c++;
            i++;
        }
        cout<<n-3-c<<endl;
        }
    }
    return 0;
}
