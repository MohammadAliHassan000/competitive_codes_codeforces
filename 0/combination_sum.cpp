//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
    void combinationSum(vector<int>&v,int sum,int cs,vector<int>v1 ,vector<vector<int>>&res,int i)
{
    if(cs>sum)
    {
        return ;
    }
    if(i==v.size())
    {
        if(cs==sum)
        {
            res.push_back(v1);
        }
        return;
    }
    cs+=v[i];
    v1.push_back(v[i]);
    combinationSum(v,sum,cs,v1,res,i);
    cs-=v[i];
    v1.pop_back();

    combinationSum(v,sum,cs,v1,res,i+1);
}
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        sort(A.begin(),A.end());
        vector<int>v1;
        vector<vector<int>>res;
        combinationSum(A,B,0,v1 ,res,0);

        map<vector<int>,int>m;
        for(int i=0;i<res.size();i++)
        {
            m[res[i]]++;
        }
        vector<vector<int>>final;
        for(auto it:m)
        {
            final.push_back(it.first);
        }




        return final;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends