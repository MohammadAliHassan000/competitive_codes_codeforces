//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int l=0;
        int h=0;
        long long sum=0;
        vector<int>v;
        while(l<=h)
        {
        
            if(sum>s)
            {
                
                sum-=arr[l];
                l++;
            }
            else 
            {
                sum+=arr[h];
                h++;
            }
            if(sum==s)
            {
                v.push_back(l+1);
                v.push_back(h);
                return v;
            }  
        }
        v.push_back(-1);
        return v;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
// 20 26
// 1 2 3 4 5 6 7 8 11 10 11 12 13 14 20 15 28 19 63 38