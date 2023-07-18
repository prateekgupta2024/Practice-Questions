#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,k1,b,j,i,m,p;
    cin>>n>>q;
    vector<vector<int>> a;
    for(i=0;i<n;i++)
    {
        cin>>k1;
        vector<int> v1;
        for(j=0;j<k1;j++)
        {
            cin>>b;
            v1.push_back(b);
        }
        a.push_back(v1);
    }
    for(i=0;i<q;++i)
    {
        cin>>m>>p;
        cout<<a[m][p]<<endl;
    }
    return 0;
}
