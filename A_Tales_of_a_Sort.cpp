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
    int flag=0;

    vInt v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int max=v[n-1];
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            flag=1;
            int m1=0;
            for(int j=0;j<=i;j++)
            {
                if(m1<v[j])m1=v[j];
            }
            max=m1;
        }
        
    }
    if(flag)cout<<max<<endl;
    else cout<<0<<endl;
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