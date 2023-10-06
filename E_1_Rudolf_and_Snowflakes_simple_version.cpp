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
 
bool helper(int i,int n)
{
    // cout<<"n "<<n<<endl;
    int x=i;
    i=i*(i+1)+1;
    while(i<=n)
    {
        
        // cout<<"i "<<i<<endl;
        if(i==n)
        {
            return true;
        }
        i=(i*x)+1;
    }
    return false;
}
void solve()
{
    int n;
    cin>>n;
    if(n<7)
    {
        cout<<"NO"<<endl;
        return;
    }
    int h=n;
    n=n-1;
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            // cout<<"i b "<<i<<endl;
            if(helper(i,h))
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        else continue;
    }
    cout<<"NO"<<endl;
    return ;
    
 
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