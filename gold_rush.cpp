#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m>n)
        {
            cout<<"NO"<<endl;
            // cout<<"here "<<endl;
        }
        else if(m==n)
        {
            cout<<"YES"<<endl;
            // cout<<"here1 "<<endl;
        }
        else
        {
            bool bi=false;
            stack<int>stack;
            stack.push(n);
            while(!(stack.empty()))
            {
                // cout<<"here4"<<endl;
                if(stack.top()%3!=0)
                {
                    // cout<<"here5"<<endl;
                    stack.pop();
                }
                else 
                {
                    int x=stack.top();
                    stack.pop();
                    int a=x/3;
                    int b=a*2;
                    if(a==m || b==m)
                    {
                        bi=true;
                        break;
                    }
                    stack.push(a);
                    stack.push(b);
                }

            }
            if(bi==true)
            {
                cout<<"YES"<<endl;
                // cout<<"here2 "<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
                // cout<<"here3 "<<endl;
            }
        }
    }
    return 0;
}