#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int max=0;
    int countA=0;
    int countB=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            countA++;
        }
        else
        {
            countB++;
        }
    }
    return 0;
}