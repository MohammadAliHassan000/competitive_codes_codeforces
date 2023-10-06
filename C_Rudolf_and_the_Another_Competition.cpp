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
    int n,m,t;
    cin>>n>>m>>t;
    vInt points;
    vInt pen;
    for(int i=0;i<n;i++)
    {
        vInt temp(m);
        for(int j=0;j<m;j++)
        {
            cin>>temp[j];
        }
        sort(all(temp)); 
        ll sum=0;
        int count=0;
        
        for(int i=0;i<m;i++)
        {
            sum+=temp[i];
            if(sum<=t)
            {
                count++;
            }
            else 
            {
                break;
            }
        }
        
        points.push_back(count);
        sum=0;
        for(int i=0;i<points[points.size()-1];i++)
        {
            // cout<<"s "<<sum<<endl;
            sum+=temp[i]+sum;

        }
        pen.push_back(sum);
    }
    // cout<<endl;
    // for(int i=0;i<points.size();i++)
    // {
    //     cout<<points[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<pen.size();i++)
    // {
    //     cout<<pen[i]<<" ";
    // }
    
    int r1=points[0];
    int r2=pen[0];
    // cout<<"r2 "<<r2<<endl;
    vInt res;
    for(int i=0;i<points.size();i++)
    {
        if(points[i]==r1)
        {
            res.push_back(pen[i]);
        }
    }
    sort(all(points), greater<int>());
    sort(all(res));
    
    // for(int i=0;i<res.size();i++)
    // {
    //     cout<<res[i]<<" ";
    // }
    // cout<<endl;
    int f1=0,f2=0;
    for(int i=0;i<points.size();i++)
    {
        if(points[i]==r1)
        {
            if(i+1<points.size() && points[i+1]==r1 )
            {
                for(int j=0;j<res.size();j++)
                {
                    if(res[j]==r2)
                    {
                        // cout<<"res "<<res[j]<<endl;
                        f1=j+1;
                        break;
                    }
                }
            }
            if(f1==0)f2=i+1;
            else f2=i;
            break;
        }
    }
    cout<<f1+f2<<endl;
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