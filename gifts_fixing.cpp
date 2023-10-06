#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr1[n];
        long long arr2[n];

        long long m1 = 1000000000000;
        long long m2 = 1000000000000;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr1[i];
            if (arr1[i] < m1)
            {
                m1 = arr1[i];
            }
        }

        for (long long i = 0; i < n; i++)
        {
            cin >> arr2[i];
            if (arr2[i] < m2)
            {
                m2 = arr2[i];
            }
        }
        long long  count=0;
        for (long long i = 0; i < n; i++)
        {
            long long t1=arr1[i]-m1;
            long long t2=arr2[i]-m2;
            count+=max(t1,t2);
        }
        cout<<count<<endl;
    }
    return 0;
}