#include <bits/stdc++.h>

using namespace std;

void enqueue(stack<int> &st,int n)
{

    st.push(n); 
}
void dequeue(stack<int> &st)
{
    stack<int>st1;
    while (!st.empty()) {
        st1.push(st.top());
        st.pop();
        }
    cout<<st1.top()<<endl;
    st1.pop();
    while(!st1.empty())
    {
        st.push(st1.top());
        st1.pop();
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    int k;
    stack<int> st;
    while(cin>>s)
    {
        if(s=="enqueue")
        {
            cin>>k;
            enqueue(st,k);
        }
        else
        {
            dequeue(st);
        }
        
    }
    
    
    return 0;
}
