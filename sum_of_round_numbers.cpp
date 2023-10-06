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
        int i=0;
       while(n>0)
        {
            int temp=(n%10)*pow(10,i);
            n=n/10;
            if(temp!=0)
            {
                v.push_back(temp);
            }
            
            i++;
        }
        cout<<v.size()<<endl;
        for(int i=v.size()-1;i>=0;i--)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}