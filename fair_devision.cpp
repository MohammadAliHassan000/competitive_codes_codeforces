#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int c1=0;
        int c2=0;

        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp==1)
            {
                c1++;
            }
            else 
            {
                c2++;
            }
            
            v.push_back(temp);
        }
        if(c1==0 || c2==0)
        {
            
            if((c1 ==0 && c2%2==0 ))
            {
                cout<<"YES"<<endl;
            }
            else if(c2==0 && c1%2==0)
            {
                cout<<"YES"<<endl;
            }
            else 
            {
               
                cout<<"NO"<<endl;
            }
        }
        else if(c1==1 && c2==1)
        {
            cout<<"NO"<<endl;
        }
        else if(c1%2==0 && c2%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(c1%2==0 && c2%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else if(c1%2!=0 && c2%2==0)
        {
            cout<<"NO"<<endl;
        }
        else if(c1%2!=0 && c2%2!=0) 
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}