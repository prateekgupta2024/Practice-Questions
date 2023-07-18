#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,y;
        float z;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        z=2*n/3;
        y=2*n/3;
        if(z-y>0)
        {
            y++;
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]%2!=0 && y>0 && (arr[i]%arr[i+1]!=0 || arr[i+1]%arr[i]!=0) && i<n-1)
            {
                arr[i]++;
            }
            if(arr[n-2]%2==0 && arr[n-1]%2!=0 && i==n-2)
            {
                arr[n-1]++;
            }
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
	}
	
	return 0;
}
