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

// #define unordered_map           um;
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
    vector<int> v1(n), v2(n);
    for (int i = 0;i<n;i++)
    {
        cin >> v1[i];
        v2[i] = v1[i];
    }
    sort(v2.begin(), v2.end(), greater<int>());
    unordered_map<int, int> m;
    for (int i = 0; i < n;i++)
    {
        m[v2[i]] = i+1;
    }
    for (int i = 0; i < n;i++)
    {
        if(i!=n-1)cout << m[v1[i]] << " ";
        else cout << m[v1[i]];
        m[v1[i]]--;
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