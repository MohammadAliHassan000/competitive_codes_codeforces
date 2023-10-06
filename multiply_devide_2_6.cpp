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
        int flag=0;
        int temp=n;
        int count=0;
        while(n!=1 && flag==0)
        {
            if(n%6==0)
            {
                n=n/6;
            }
            else
            {
                while(n%6!=0)
                {
                    n=n*2;
                    if(n>temp)
                    {
                        count=-1;
                        flag=1;
                        break;
                        
                    }
                }
                
            }
            if(flag==0)
            {
                count++;
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}