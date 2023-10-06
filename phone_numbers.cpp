#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int temp;
    if(n%2==0)
    {
        temp=n-1;
    }
    else
    {
        temp=n-2;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        if(i%2!=0 && i<temp)
        {
            cout<<"-";
        }
    }
    cout<<endl;
    return 0;
}