/* Mohammad Ali Hassan    */
/* Created 07-07-23 */


#include <bits/stdc++.h>
using namespace std;

/********** pre-defined keywords ******************/

#define IO                      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb                      push_back
#define ppb                     pop_back
#define upper(s)                transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s)                transform(s.begin(), s.end(), s.begin(), ::tolower);
#define Imax                    pow(10,9)
#define sz(x)                   (int)x.size()
#define setbits                 __builtin_popcount
#define ff                      first
#define ss                      second
#define setbitsll               __builtin_popcountll
#define mp                      make_pair
#define all(x)                  (x).begin(),(x).end()

#define unordered_map           um;
/***************** short-hands ********************/

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vInt;
typedef stack<int> stInt;
typedef queue<int> qInt;
 
void solve()
{
    int n;
    cin>>n;
    vInt v(n);
    vector<pair<int,int>>res;
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n-1;i++)
    {
        if(i==n-2)
        {
            break;
        }
        if(v[i]>v[i+1])
        {
            int max=v[i];
            int mi=i;
            for(int j=i;j<n;j++)
            {
                if(v[j]>=max)
                {
                    max=v[j];
                    mi=j;
                }
            }
            while(v[i+1]+v[mi]<v[i])
            {
                v[mi]*=2;
                res.push_back(make_pair(mi,mi));
                // cout<<"here1"<<endl;
            }
            while(v[i]>v[i+1])
            {
                v[i+1]+=v[mi];
                res.push_back(make_pair(i+1,mi));
                // cout<<"here2"<<endl;
            }
        }
    }
    // for(int i=0;i<n;i++)cout<<v[i]<<" ";
    // cout<<endl;
    int z=v[n-2];
    while(v[n-1]<z)
    {
        v[n-1]+=z;
        res.push_back(make_pair(n-1,n-2));
        // cout<<"here1"<<endl;
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i].first+1<<" "<<res[i].second+1<<endl;
    }
}
signed main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}