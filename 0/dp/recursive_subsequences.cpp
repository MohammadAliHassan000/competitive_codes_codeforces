/* Mohammad Ali Hassan    */
/* Created 07-07-23 */


#include <bits/stdc++.h>
using namespace std;

void print(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] < v2[1];
}

void findSub(vector<vector<int>>r,vector<int>v,vector<int>&res,int i,int n)
{
    if(i>=n){
        print(res);
        r.push_back(res);
        return;
    }
    res.push_back(v[i]);
    findSub(r,v,res,i+1,n);
    res.pop_back();
    findSub(r,v,res,i+1,n);

}

int main()
{
    vector<int>v={1,2,3};
    vector<int>res;
    vector<vector<int>>r;
    findSub(r,v,res,0,3);
    sort(r.begin(), r.end(), sortcol);
    for(int i=0;i<r.size();i++)
    {
        for(int j=0;j<r[i].size();j++)
        {
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}