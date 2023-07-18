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
        int a[n],sum=0,k=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        while(1)
        {
            if(k*(k+1)<=sum*2)
            k++;
            else
            break;
        }
        cout<<k-1<<endl;

    }
    return 0;
}
