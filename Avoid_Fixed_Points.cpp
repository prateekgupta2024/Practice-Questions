#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n;
        int arr[n],i,c=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(i+1+c==arr[i])
            {
                c++;
            }
        }
        cout<<c<<endl;
	}
	return 0;
}
