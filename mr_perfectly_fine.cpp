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
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            int t1,t2;
            cin>>t1>>t2;
            pair<int,int>temp;
            temp.first=t1;
            temp.second=t2;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        // cout<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<v[i].first<<" ";
        //     cout<<v[i].second<<endl;
        // }

        int f1=0;
        int f2=0;
        int f3=0;
        int sum=0;
        int sum1=0;
        for(int i=0;i<n;i++)
        {
            // cout<<v[i].second<<" v[i]"<<endl;
            // cout<<v[i].first<<" v[i]"<<endl;
            if(v[i].second==0)
            {
                // cout<<"here1 "<<endl;
                continue;
            }
            else if(v[i].second==10 && f1==0)
            {
                // cout<<"here2 "<<endl;
                // cout<<v[i].first<<" v[i]"<<endl;

                sum+=v[i].first;
                f1=1;
                // cout<<"sum "<<sum<<endl;
            }
            else if(v[i].second==1 && f2==0)
            {
                // cout<<"here3 "<<endl;
                sum+=v[i].first;
                f2=1;
                // cout<<"sum "<<sum<<endl;
            }
            else if(v[i].second==11 && f3==0)
            {
                // cout<<"here4 "<<endl;
                sum1+=v[i].first;
                f3=1;
                // cout<<"sum1 "<<sum<<endl;
            }

        }
        // cout<<sum<<" "<<sum1<<endl;
        // cout<<"f3 "<<f3<<endl;
        if(!f1 || !f2)
        {
            if(f3==0)
            {
                cout<<-1<<endl;
            }
            else 
            {
                cout<<sum1<<endl;
            }
        }
        else if(sum==0 && sum1==0)
        {
            cout<<-1<<endl;
        }
        else if(sum==0)
        {
            cout<<sum1<<endl;
        }
        else if(sum1==0)
        {
            cout<<sum<<endl;
        }
        else 
        {
            cout<<min(sum,sum1)<<endl;
        }
        // cout<<endl;
    }
    return 0;
}