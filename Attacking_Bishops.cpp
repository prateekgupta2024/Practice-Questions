#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m,n,t,sum=0,q,i,a,b;
    cin>>m>>n;
    int arr[m]={0},brr[2*m]={0};
    vector<pair<int,int>> v;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    for(i=0;i<v.size();i++)
    {
        arr[v[i].first-v[i].second]++;
        brr[v[i].first+v[i].second]++;
    }
    for(i=0;i<n;i++)
    {
        t=(arr[i]*(arr[i]-1))/2;
        
        sum+=t;
    }
    for(i=0;i<2*m;i++)
    {
        q=(brr[i]*(brr[i]-1))/2;
        sum+=q;
    }
    cout<<sum;
    return 0;
}
