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
// typedef unordered_map um;
typedef stack<int> stInt;
typedef queue<int> qInt;
 
void solve()
{
    int n;
    cin>>n;
    vInt v(n+1);
    int p;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        int temp;
        cin>>temp;
        v[temp]=1;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int temp;
        cin>>temp;
        v[temp]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(!(v[i]))
        {
            cout<<"Oh, my keyboard!"<<endl;
            return ;
        }
    }
    cout<<"I become the guy."<<endl;

}
signed main()
{
    
    solve();
    return 0;
}