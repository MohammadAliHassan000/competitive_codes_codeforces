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
        string s;
        cin>>s;
        int arr[n];
        for(int i=0;i<n;i++)
        {

            string temp=s.substr(i,n);
            // cout<<temp;
            arr[i]=stoi(temp);
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            res=res&arr[i];
            // cout<<"res"<<res<<endl;
        }
        cout<<std::setw(n) << std::setfill('0') <<res<<endl;

    }
    return 0;
}