#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp+k<=5)
        {
            count++;
        }
    }
    cout<<floor((count*1.0)/3)<<endl;
    return 0;
}