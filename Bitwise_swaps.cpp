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
        int arr[n],k[n],i,j,temp,c=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            k[i]=arr[i];
        }
        sort(k,k+n);
        for(i=0;i<n;i++)
        {
            for(j=n;j>0;j--)
            {
                if(arr[i]&arr[j]!=0 && arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    i++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==k[i])
            {
                c++;
            }
        }
        if(c==n)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }

	}
	
	return 0;
}
