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
    int a=n;
    n=((n*(n-1)))/2;
    map<ll,int>m;
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        m[temp]++;
    }
    vInt v;
    int x;
    int mx=0;
    int element;
    for(auto it:m)
    {
        v.push_back(it.first);
        if(it.second>mx)
        {
            mx=it.second;
            element=it.first;
        }
        x=it.first;
    }
    int te=a-m.size()-1;
    // cout<<"te "<<te<<endl;
    while(te>0)
    {
        v.push_back(element);
        te--;
    }
    v.push_back(x+1);
    sort(all(v));
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    
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