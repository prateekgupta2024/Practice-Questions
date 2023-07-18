#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long int mod=1e9+7;
#define pb(x) push_back(x)
#define fill(n,arr) for(ll i=0;i<n;i++){ll k; cin>>k; arr.push_back(k);}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        ll n,i,c=0;
        cin>>n;
        vector<ll> arr;
        fill(n,arr);
        vector<ll> v;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                v.pb(arr[i]);
            }
            else
            {
                auto it=upper_bound(v.begin(),v.end(),arr[i]);
                if(it==v.end() || *it==arr[i])
                {
                v.pb(arr[i]);}
                else
                {
                    v[it-v.begin()]=arr[i];
                }
            }
        }
        cout<<v.size()<<endl;
    return 0;
}

// stuck for long time . initially i was using lower bound but upper bound gives the answer.
// while solving i was very confuse within the working of lower bound and upper bound (after reading from the web also about it).
// learn the use of lower bound and upper bound.