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
    int a, b, c;
    // cout << "n " << n << endl;
    if(n<7)
        cout << "NO" << endl;
    else if(n%3==0)
    {
        a = 1, b = 4, c = n - 5;
        if(c==1 || c==4)
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }

    }
    else 
    {
        a = 1, b = 2, c = n - 3;
        if(c==1 || c==2)
            cout << "NO" << endl;
        else 
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
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