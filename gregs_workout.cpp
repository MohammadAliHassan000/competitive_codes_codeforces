/* Mohammad Ali Hassan    */
/* Created 7th June 2023 */


#include <bits/stdc++.h>
using namespace std;
#define IO \  
    ios_base::sync_with_stdio(false); \ 
    cin.tie(NULL);\ 
    cout.tie(NULL);                   
#define ll long long
#define pb push_back
#define ppb pop_back
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
    
typedef vector<int> vInt;
 
void solve()
{
    int n;
    cin>>n;
    int s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(i%3==0)
        {
            s1+=temp;
        }
        else if(i%3==1)
        {
            s2+=temp;
        }
        if(i%3==2)
        {
            s3+=temp;
        }
    }
    if(max(s1,max(s2,s3))==s1)
    {
        cout<<"chest"<<endl;
    }
    else if(max(s1,max(s2,s3))==s2)
    {
        cout<<"biceps"<<endl;
    }
    else
    {
        cout<< "back"<<endl;
    }
    return ;

}
signed main()
{
    
    solve();
    return 0;
}