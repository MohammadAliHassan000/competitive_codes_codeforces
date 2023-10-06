/* Mohammad Ali Hassan    */
/* Created 7th June 2023 */


#include <bits/stdc++.h>
using namespace std;
// #define IO\  
//     ios_base::sync_with_stdio(false);\ 
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
    int n;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        if(i%2!=0)
        {
            cout<<"I hate that"<<" ";
        }
        else 
        {
            cout<<"I love that"<<" ";
        }
    }
    if(n%2==0)
    {
        cout<<"I love it"<<endl;
    }
    else 
    {
        cout<<"I hate it"<<endl;
    }
}
signed main()
{
    
    solve();
    return 0;
}