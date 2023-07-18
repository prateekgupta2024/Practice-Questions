#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    int k=0;
    if(n==2 || n==3)
    return 1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i!=0)
        {
            k++;
        }
        else
        break;
    }
    if(k==n/2-1)
    return 1;
    return 0;

}

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0;
        cin>>n;
        if(n==1)
        c=1;
        for(i=2;i<=n;i++)
        {
            if(isprime(i))
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
