#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    string arr[5];
    for(int i=0;i<5;i++)
    {
        string s2;
        cin>>arr[i]; 
    }
    int flag=0;
    for(int i=0;i<5;i++)
    {
        string temp=arr[i];
        if(s1[0]==temp[0] || s1[1]==temp[1])
        {
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}