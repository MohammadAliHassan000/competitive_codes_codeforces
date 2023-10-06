/* Mohammad Ali Hassan    */
/* Created 07-07-23 */


#include <bits/stdc++.h>
using namespace std;

bool isSafe(int i,int j,int arr[4][4])
{
    return(i<4 && j<4 && arr[i][j]==1);
}

bool ratInMaze(int arr[4][4],vector<string>&v,int i,int j,int k,string &s)
{
    if(i==3 && j==3 && arr[i][j])
    {
        v.push_back(s);
        cout<<"here"<<endl;
        // v.push_back(make_pair(i,j));
        return true ;
    }
    if(isSafe(i,j,arr)==true )
    {
        // cout<<"here"<<endl;
        // v.push_back(make_pair(i,j));
        // cout<<endl;
        
        s.append("D");
        bool b2=ratInMaze(arr,v,i+1,j,k,s);
        cout<<"s "<<s<<endl;
        s.pop_back();

        s.append("R");
        bool b1=ratInMaze(arr,v,i,j+1,k,s); 
        cout<<"s "<<s<<endl;
        s.pop_back();
        
        
        

        if(b1==true)return true ;
        if(b2==true)return true;
        // v.pop_back();
    }
    return false ;
}


int main()
{
   int arr[4][4]=
        {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}};

    vector<string>v;
    string s;
    if(ratInMaze(arr,v,0,0,0,s)==false)cout<<"NO"<<endl;
    else 
    {
        cout<<v.size()<<endl;
        cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }
        
    }
    return 0;
}