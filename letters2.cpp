#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<long long>room;
    vector<long long>letter;
    for(int i=0;i<n;i++)
    {
        long long temp;
        cin>>temp;
        room.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        long long temp;
        cin>>temp;
        letter.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        long long temp=letter[i];
        long long count=1;
        for(long long j=0;j<m;j++)
        {
            
            if(temp>room[j])
            {
                temp-=room[j];
                count++;
            }
            else
            {
                cout<<count<<" "<<temp<<endl;
                break;
            }
        }
        
    }

    return 0;
}