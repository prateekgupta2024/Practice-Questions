#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}


int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,r,cnt=0;
        vector< pair <int,int> > vect;
        cin>>n>>r;
        ll arr[n],brr[n],c[n],i;
        for(i=0;i<n;i++)
        {
        cin>>arr[i];}
        for(i=0;i<n;i++)
        {
        cin>>brr[i];
        c[i]=arr[i]-brr[i];}



        for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],c[i]) );

        sort(vect.begin(), vect.end(), sortbysec);
        i=0;
        
        for(int i=0;i<n;i++)
	{
		if(vect[i].first > r)
			continue;
		int diff = (r - (vect[i].first - vect[i].second))/vect[i].second;
		cnt += diff;
		r -= (diff*vect[i].second);
	}

        
        cout<<cnt<<endl;

    }
    return 0;
}
