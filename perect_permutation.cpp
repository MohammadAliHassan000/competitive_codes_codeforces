#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {

            
            int arr[n]; 
            for (int i = 0; i < n; i++)
            {
                arr[i] = i+1;
            }
            for(int i=0;i<n-1;i++)
            {
                swap(arr[i],arr[i+1]);
                i++;
            }
            if(n%2!=0)
            {
                swap(arr[n-1],arr[n-2]);
            }
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;

            
        }
    }
    return 0;
}