#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++ )
    {
        int temp;
        cin>>temp;
        if(temp==1)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"EASY"<<endl;
    }
    else 
    {
        cout<<"HARD"<<endl;
    }
    return 0;
}