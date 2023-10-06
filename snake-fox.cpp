#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(int j=0;j<m;j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else if(i%4==0)
        {
            for(int j=0;j<m;j++)
            {
                if(j==0)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
            }
            cout<<endl;
        }

        else 
        {
            for(int j=0;j<m;j++)
            {
                if(j==m-1)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
            }
            cout<<endl;
        }
        
    }
    return 0;
}