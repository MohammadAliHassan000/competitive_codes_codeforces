//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int max=arr[0];
        int m2=arr[0];
        int i=0;
        int count=0;
        while(i<n-1)
        {
            int x=arr[i];
            cout<<"x "<<x<<endl;
            cout<<"i "<<i<<endl;
            int sum=0;
            while(x>0)
            {
                sum+=arr[i+x];
                if((arr[i+x]+i+x)>=max)
                {
                    max=arr[i+x]+i+x;
                    m2=i+x;
                    cout<<"max "<<max<<endl;
                    cout<<"m2 "<<m2<<endl;
                }
                x--;
                
            }
            i=m2;
            max=m2;
            count++;
            if((arr[i]+i)>=n-1)
            {
                return (count+1);
            }
            if(sum==0)
            {
                return -1;
            }
            // cout<<"max "<<max<<endl;
            cout<<"count "<<count<<endl;
            cout<<"i "<<i<<endl;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends