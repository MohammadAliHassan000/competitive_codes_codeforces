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
    ll sum=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        sum+=temp;
        m[temp]++;
    }
    if(n==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    int flag=0;
    for(auto it:m)
    {
        if(it.second>1)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    // cout<<"s "<<sum<<endl;
    if(sum<(n*3))
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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