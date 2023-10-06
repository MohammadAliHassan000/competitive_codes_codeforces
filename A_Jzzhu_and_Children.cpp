/* Mohammad Ali Hassan    */
/* Created 7th June 2023 */


#include <bits/stdc++.h>
using namespace std;
// #define IO \  
//     ios_base::sync_with_stdio(false); \ 
//     cin.tie(NULL);\ 
//     cout.tie(NULL);                   
#define ll long long
#define pb push_back
#define ppb pop_back
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
    
typedef vector<int> vInt;
typedef unordered_map<int,int> mInt;
typedef stack<int> stInt;
 
void solve()
{
    int n,m;
    cin>>n>>m;
    vInt v(n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v[i]=ceil((temp*1.0)/m);
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    int max=v[0];
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]>=max)
        {
            max=v[i];
            res=i;
        }
    }
    cout<<res+1<<endl;
    
    
}
signed main()
{
    
    solve();
    return 0;
}