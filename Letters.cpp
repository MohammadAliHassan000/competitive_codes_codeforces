#include <bits/stdc++.h>
using namespace std;
long long  helper(vector<long long >v,long long  t,long long  n)
{
    long long  s=0;
    long long  e=n-1;
    while(s<e)
    {
        long long  m=(s+e)/2;
        if(v[m]<=t && v[m+1]>=t)
        {
            if(v[m]==t)
            {
                return m;
            }
            else
            {
                return m+1;
            }
        }
        else if(v[m]<t)
        {
            s=m;
        }
        else if(v[m]>t)
        {
            e=m;
        }
    }
    return -1;

}

int  main(){

    long long  n,m;
    cin>>n>>m;
    // cout<<"here1"<<endl;
    vector<long long >room;
    // cout<<"here2"<<endl;
    room.push_back(0);
    // cout<<"here3"<<endl;
    for(long long   i=1;i<=n;i++)
    {
        // cout<<"here4"<<endl;
        long long  temp;
        cin>>temp;
        room.push_back(room[i-1]+temp);
    }
    // cout<<"here5"<<endl;
    long long  letter[m];
    for(long long   i=0;i<m;i++)
    {
        cin>>letter[i];
    }
   
    for(long long  i=0;i<m;i++)
    {
        long long  r=helper(room,letter[i],n+1);
        cout<<r<<" ";
        cout<<abs(letter[i]-room[r-1])<<endl;
    }

    return 0;
}