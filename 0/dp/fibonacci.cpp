// /* Mohammad Ali Hassan    */
// /* Created 07-07-23 */


// #include <bits/stdc++.h>
// using namespace std;

// // bottom up->go from base case to required ans 
// // top down ->go from req ans to base and come back
// long long fibonacci(int n,vector<int>&dp) // time complexity O(N) 
// {
//     if(dp[n]!=-1)
//     {
//         return dp[n];
//     } 
    
//     if(n<=1)
//     {
//         return n;
//     }
//     long long prev2=fibonacci(n-1,dp);
//     long long prev1=fibonacci(n-2,dp);
//     dp[n]=prev2+prev1;
//     return prev2+prev1;
// }

// long long bottomUp(int n,vector<int>&dp)
// {
//     for(int i=2;i<=n;i++)
//     {
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }

// long long optimised(int n,long long prev2,long long prev1)
// {
//     for(int i=2;i<=n;i++)
//     {
//         long long c=prev2+prev1;
//         prev2=prev1;
//         prev1=c;
//     }
//     return prev1;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>dp(5,-1);
    
//     // cout<<fibonacci(n,dp);
//     // dp[0]=0;
//     // dp[1]=1;
//     // cout<<bottomUp(n,dp);
//     int prev2=0;
//     int prev1=1;
//     cout<<optimised(n,prev2,prev1);
//     return 0;
// }
// // climbing stair is a fibonacci problem 
/* Mohammad Ali Hassan    */
/* Created 07-07-23 */


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int(*a)[7];
    cout << a[0];
    return 0;
}