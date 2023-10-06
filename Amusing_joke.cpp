#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    map<char,int>m1;
    map<char,int>m2;
    for(int i=0;i<s1.size();i++)
    {
        m1[s1[i]]++;
    }

    for(int i=0;i<s2.size();i++)
    {
        m1[s2[i]]++;
    }

    for(int i=0;i<s3.size();i++)
    {
        m2[s3[i]]++;
    }
    if(m1.size()!=m2.size())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int flag=0;
        for(int i=0;i<s3.size();i++)
        {
            if(m1[s3[i]]!=m2[s3[i]])
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}