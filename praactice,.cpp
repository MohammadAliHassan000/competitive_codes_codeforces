#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    
    int days;
    cin>>days;
    int coins[days];
    for(int i=0;i<days;i++)
    {
        cin>>coins[i];
        
    }
 
    for(int i=0;i<days;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(a1[j]<=coins[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}