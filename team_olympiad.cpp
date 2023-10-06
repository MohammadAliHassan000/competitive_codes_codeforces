#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            v1.push_back(i);
        }
        else if(v[i]==2)
        {
            v2.push_back(i);
        }
        else if(v[i]==3)
        {
            v3.push_back(i);
        }
    }
    int t1=min(v1.size(),v2.size());
    int t2=min(v2.size(),v3.size());
    int w=min(t1,t2);
    cout<<w<<endl;
    for(int i=0;i<w;i++)
    {
        cout<<v1[i]+1<<" ";
        cout<<v2[i]+1<<" ";
        cout<<v3[i]+1<<" ";
        cout<<endl;
    }
    

    return 0;
}