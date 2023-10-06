#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }
        
        int count=1;
        int max=count;
        for(int i=0;i<2*n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                count++;
                if(max<count)
                {
                    max=count;
                }
            }
            else
            {
                count=1;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}