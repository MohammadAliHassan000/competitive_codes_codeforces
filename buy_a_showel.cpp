#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n;
    cin>>k>>n;
    
    if(k%10==0)
    {
        cout<<1<<endl;
        
    }
    
    else
    {
        for(int i=1;i<10;i++)
        {
            if((k*i)%10==n)
            {
                cout<<i<<endl;
                break;
            }
            else if((k*i)%10==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    
    
    return 0;
}