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
    int sum=0;
    int mul=1;
    int n0=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        sum+=temp;
        mul*=temp;
        if(temp==-1)
        {
            n0++;
        }
        
    } 
    
    if(sum>=0 && mul ==1)
    {
        cout<<0<<endl;
    }
    else if(sum>=0 && mul !=1)
    {
        cout<<1<<endl;
    }
    else 
    {
        // cout<<"here"<<endl;
        int count=0;
        while(sum<0 || mul !=1)
        {
            // cout<<"sum "<<sum<<" mul "<<mul<<" count "<<count<<endl;
            count++;
            sum+=2;
            mul*=-1;
            // cout<<"sum "<<sum<<" mul "<<mul<<" count "<<count<<endl;
        }
        cout<<count<<endl;
        
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