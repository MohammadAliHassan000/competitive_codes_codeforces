/* Mohammad Ali Hassan    */
/* Created 07-07-23 */

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;


/********** pre-defined keywords ******************/

// #define IO                      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb                      push_back
#define ppb                     pop_back
#define upper(s)                transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s)                transform(s.begin(), s.end(), s.begin(), ::tolower);
#define Im1                    pow(10,9)
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
    double n,m;
    cin>>n>>m;
    vector<double> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(all(v));
    double m1=INT_MIN;
    for(int i=1;i<n;i++)
    {
        // cout<<"here"<<endl;
        // cout<<v[i]-v[i-1]<<endl;
        if(v[i]<=m)
        {
            // cout<<"here1"<<endl;
            
            if(v[i]-v[i-1]>m1)
            {
                m1=v[i]-v[i-1];
            }
        }
    }
    double res=(max((m1/2),max((v[0]-0),(m-v[n-1]))));
    cout<<fixed<<setprecision(10)<<res<<endl;

}
signed main()
{
    
    solve();
    return 0;
}