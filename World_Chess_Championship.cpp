#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long x,p,i,carl=0,chef=0;
        cin>>x;
        string s;
        cin>>s;
        for(i=0;i<14;i++)
        {
            if(s[i]=='C')
            {
                carl+=2;
            }
            else if(s[i]=='D')
            {
                carl++;
                chef++;
            }
            else{
                chef+=2;
            }
        }
        if(carl>chef)
        {
            p=60*x;
        }
        else if(carl==chef)
        {
            p=55*x;
        }
        else{
            p=40*x;
        }
        cout<<p<<endl;

	}
	
	return 0;
}
