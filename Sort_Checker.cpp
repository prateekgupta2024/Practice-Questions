#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n],i,c=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    sort(a,a+n);
	    for(i=0;i<n;i++)
	    {
            cout<<a[i];
	        if(a[i]==b[i])
	        {
	            c++;
	        }
	    }
	    if(c==n)
	    {
	        cout<<"yes\n";
	    }
	    else
	    {
	        cout<<"no\n";
	    }
	}
	
	return 0;
}