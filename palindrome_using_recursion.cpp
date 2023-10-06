#include <bits/stdc++.h>
using namespace std;
string checkPalindrome(string s,int l,int n)
{
    string  b="YES";
    while(l<n)
    {
        // cout<<"here "<<l<<" "<<n<<endl;
        if(s[l]==s[n])
        {
            // cout<<"HERE1"<<endl;
            checkPalindrome(s,l+1,n-1);
            return b;
        }
        else 
        {
            
            b="no";
            return b;
        }
        
    }
    return b;
}

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int l=0;
    cout<<checkPalindrome(s,l,n-1);
    return 0;
}