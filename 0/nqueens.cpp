/* Mohammad Ali Hassan    */
/* Created 07-07-23 */


#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>&v,int i,int j,int n)
{
    for(int a=0;a<=n;a++)
    {
        // cout<<"a "<<a<<" j "<<j<<endl;
        if(v[i][a]==1) return false;
    }

    for(int a=i,b=j;a>=0 && b>=0;a-- ,b--)
    {
        if(v[a][b]==1)return false;
    }
    
    for(int a=i,b=j;a<n && b>=0;a++ ,b--)
    {
        if(v[a][b]==1)return false;
    }
    return true;

}
bool nQueen(vector<vector<int>>&v,int n,int j){
    

    if(j==n)return true;
    for(int i=0;i<n;i++)
    {
        // cout<<"j "<<j<<endl;
        bool b=isSafe(v,i,j,n);
        // cout<<"b "<<b<<endl;
        if(b)
        {
            v[i][j]=1;
            if(nQueen(v,n,j+1))return true;
            v[i][j]=0;
        }
    }
    return false;

}

int main()
{
    vector<vector<int>>v={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    nQueen(v,5,0);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}