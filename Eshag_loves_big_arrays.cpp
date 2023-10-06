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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int i = 0;

        int count = 0;
        // cout<<"i"<<arr[i]<<endl;
        // cout<<"n-1"<<arr[n-1]<<endl;
        if (arr[i] == arr[n - 1])
        {
            cout << 0 << endl;
           
        }
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                int avg = (arr[i] + arr[0])/2;
                if (avg < arr[i])
                {
                    count++;
                }
            }
            cout<<count<<endl;
        }
        

    }
    return 0;
}