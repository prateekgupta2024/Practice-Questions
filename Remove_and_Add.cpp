#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define FILL(n,arr) for(int i=0;i<n;i++){ll x;cin>>x;arr.pb(x);}
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;


map<int, int> mp; 
int k, res, j, n; 
 
int solve(int *arr) 
{ 
    mp.clear(); 
    k = n - 1, res = n, j = 0; 
    for (int i = 0; i < n; ++i) 
    { 
        k = n - i - 1; 
        int temp; 
        j = max(mp.find(arr[i]) != mp.end() ? temp = mp[arr[i]] : temp = 0, j); 
        mp[arr[i]] = 1 + i; 
        res = min(res, min(j, k) + j + k); 
    } 
    return res; 
} 
 
int main() 
{ 
    int t; 
    cin >> t; 
    while (t--) 
    { 
        cin >> n; 
        int arr[n]; 
        for (int i = 0; i < n; ++i) 
        { 
            cin >> arr[i]; 
        } 
        cout << solve(arr) << "\n"; 
    } 
    return 0; 
}