

#include <bits/stdc++.h>
using namespace std;


/***************** short-hands ********************/

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vInt;
typedef stack<int> stInt;
typedef queue<int> qInt;
 

signed main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
    cin>>n;
    vInt arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int num=1;
    int fin=arr[0];
    for(int i=1;i<n;i++)
    {
        
        if((fin&arr[i])==0 && fin==0)
        {
            num++;
            fin=arr[i];
            
        }
        else 
        {
            fin=fin&arr[i];
        }
    }
    if(fin!=0 && num>1)num--;
    cout<<num<<endl;
    }
    return 0;
}