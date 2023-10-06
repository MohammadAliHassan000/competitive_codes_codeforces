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
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++)
        cin >> v[i];
    int k;
    cin >> k;
    vector<pair<int,int>> vp(k);
    for (int i = 0; i < k;i++)
    {
        cin >> vp[i].first;
        cin >> vp[i].second;
    }
    
    for (int j = 0; j < k;j++)
    {
        int l = vp[j].first-1;
        int x = vp[j].second;
        int count = 0;
        int res = v[l];
        for (int i = l; i < n;i++)
        {
            res = res & v[i];
            if(res>=x)
            {
                count = i+1;
            }
        }
        if(count==0)
            cout << -1 << " ";
        else
            cout << count << " ";
    }
    cout << endl;
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