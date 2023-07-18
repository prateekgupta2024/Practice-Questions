#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,d,i=0,curr=0,s=0,p;
        cin>>n>>d;
        ll a[d];
        for(i=0;i<d;i++)
        {
        cin>>a[i];
        s+=a[i];
        /*n-=a[i];
        curr=i+1;
        if(n<=0){
        cout<<curr<<endl;continue;}*/
        }
        p=n%s;
        if(p==0){
        cout<<d<<endl;continue;}
        i=0;
        while(p>0)
        {
            p-=a[i];
            curr=i+1;
            i++;
            if(i==d)
            i=0;
            //cout<<n;
        }
        cout<<curr<<endl;

    }
    return 0;
}
