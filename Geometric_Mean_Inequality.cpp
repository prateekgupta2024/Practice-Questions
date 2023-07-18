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
        int n,c=0,i,a=0,b=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            a++;
            else
            b++;
        }
        i=3;
        while(i<=n)
        {
            if(i%4==3)
            c++;
            if(i%4==0)
            c++;   // c is no. of -1
            i++;
        }
        int c1=n-c;
        if(b==c || b==c1)
        cout<<"Yes\n";
        else if (n%2==0&&a==b)
        cout<<"Yes\n";
        else
        cout<<"No\n";
        
    }
    return 0;
}
