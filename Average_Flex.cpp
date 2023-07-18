#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int binarysearch(int arr[], int n, int k){
        // code here
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(k<arr[mid])
            {
                high=mid-1;
            }
            else if(k>arr[mid])
            {
                low=mid+1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,c=0;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            arr.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            int y=0,p=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j]<=arr[i])
                {
                    y++;
                }
                else
                {
                    p++;
                }
            }
            if(y>p)
            {
                c++;
            }
        }
        cout<<c<<endl;

    }
    return 0;
}
