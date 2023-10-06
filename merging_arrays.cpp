/* Mohammad Ali Hassan    */
/* Created 7th June 2023 */


#include <bits/stdc++.h>
using namespace std;
#define IO \  
    ios_base::sync_with_stdio(false); \ 
    cin.tie(NULL);\ 
    cout.tie(NULL);                   
#define ll long long
#define pb push_back
#define ppb pop_back
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
    
typedef vector<int> vInt;

int helper(vInt v, int n)
{
    int count=1;
        int mx=count;
        for(int i=0;i<2*n-1;i++)
        {
            if(v[i]==v[i+1])
            {
                count++;
                if(mx<count)
                {
                    mx=count;
                }
            }
            else
            {
                count=1;
            }
        }
        return mx;
}
void solve()
{
    int n;
    cin>>n;
    int res=1;
    int temp=1;
    vInt v1(n);
    vInt v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    // cout<<"here1"<<endl;
    vInt r1(2*n);
    vInt r2(2*n);
    vInt r3(2*n);
    vInt r4(2*n);
    vInt r5(2*n);
    vInt r6(2*n);
    int j=0;
    for(int i=0;i<n;i++)
    {
        r1[j]=v1[i];
        j++;
    }
    for(int i=n-1;i>=0;i--)
    {
        r1[j]=v2[i];
        j++;
    }
    j=0;
    for(int i=0;i<n;i++)
    {
        r2[j]=v1[i];
        j++;
    }
    for(int i=0;i<n;i++)
    {
        r2[j]=v2[i];
        j++;
    }
    j=0;
    for(int i=0;i<n;i++)
    {
        r3[j]=v2[i];
        j++;
    }
    for(int i=0;i<n;i++)
    {
        r3[j]=v1[i];
        j++;
    }
    j=0;
    for(int i=0;i<n;i++)
    {
        r4[j]=v2[i];
        j++;
    }
    for(int i=n-1;i>=0;i--)
    {
        r4[j]=v1[i];
        j++;
    }
    j=0;
    for(int i=0;i<n;i++)
    {
        r5[j++]=v1[i];
        r5[j++]=v2[i];
    }
    j=0;
    for(int i=0;i<n;i++)
    {
        r6[j++]=v2[i];
        r6[j++]=v1[i];
    }


    // cout<<"here2"<<endl;
    // for(int i=0;i<2*n;i++)
    // {
    //     cout<<r5[i]<<" ";
    // }
    // cout<<endl;

    int t=(max(max(helper(r1,n),helper(r2,n)),max(helper(r3,n),helper(r4,n))));
    int t2=max(helper(r5,n),helper(r6,n));
    cout<<max(t,t2);
    cout<<""<<endl;
    return ;
}
signed main()
{
    
    IO int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
