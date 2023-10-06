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
    int count=0;
    int flag=0;
    if(m%n!=0)
    {
        cout<<-1<<endl;
    }
    else if(m/n==1)
    {
        cout<<0<<endl;
    }
    else
    {
        n=m/n;
        while(n>1)
        {
            if(n%2==0)
            {
                n=n/2;
                count++;
            }
            else if(n%3==0)
            {
                n=n/3;
                count++;
            }
            else if(n>1)
            {
                cout<<"-1"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<count<<endl;
        }
    }
}
signed main()
{
    
    solve();
    return 0;
}