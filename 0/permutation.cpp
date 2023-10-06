/* Mohammad Ali Hassan    */
/* Created 07-07-23 */


#include <bits/stdc++.h>
using namespace std;
void permutation(string str,int l,int r){
    if(l==r)
    {
        if(str.find("ab")==string::npos)
        {
            cout<<str<<endl;
        }
        
        return;
    }
    for(int i=l;i<=r;i++)
    {
        swap(str[l],str[i]);
        // cout<<"here "<<str<<endl;
        permutation(str,l+1,r);
        swap(str[l],str[i]);

    }
}
int main()
{
    string s;
    cin>>s;
    permutation(s,0,s.size()-1);
    return 0;
}