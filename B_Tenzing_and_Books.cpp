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
    ll n,m;
    cin>>n>>m;
    // cout<<"m "<<m<<endl;
    ll res=0;
    int flag1=0;
    int temp=0;
    if(temp==m)
    {
        flag1=1;
    }
    for(int j=0;j<3;j++)
    {
        int flag=0;
        // cout<<"here it is"<<endl;
        for(int i=0;i<n;i++)
        {
            int t1;
            cin>>t1;
            temp=t1;
            if((temp|m)!=m)
            {
                flag=1;
                // cout<<"t "<<(temp|m)<<endl;
                // cout<<"flag "<<flag<<endl;
            }

            // cout<<"temp "<<temp<<endl;
            if(flag==0)
            {
                res|=temp;
                // cout<<"here "<<temp<<endl;
                if(res==m)
                {
                    flag1=1;
                }
            }
            
        }
    }
    if(flag1==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
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