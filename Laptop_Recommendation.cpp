#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
const long long int mod=1e9+7;
#define fill(n,arr) for(ll i=1;i<=n;i++){cin>>arr[i];}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,res=0,p=0,c=0,m;
        cin>>n;
        ll arr[11]={0};
        for(i=0;i<n;i++)
        {
        cin>>k;
        arr[k]++;}
        m=*max_element(arr,arr+11);
        for(i=0;i<11;i++)
        {
            if(arr[i]==m)
            {
                p=i;
                c++;
            }
        }
        if(c>1)
        cout<<"CONFUSED\n";
        else
        cout<<p<<endl;
    }
    return 0;
}
