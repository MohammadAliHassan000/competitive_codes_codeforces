#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }   
        int evenc=0;
        int oddc=0;
        for(int i=0;i<a;i++)
        {
            if(i%2==0 && arr[i]%2!=0)
            {
                evenc++;
            }
            else if(i%2!=0 && arr[i]%2==0)
            {
                oddc++;
            }
        }
        if(evenc-oddc==0)
        {
            cout<<(evenc+oddc)/2<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        

    }
    return 0;
}