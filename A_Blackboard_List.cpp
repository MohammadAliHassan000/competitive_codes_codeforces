#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int min=pow(10,9);
        int max=-(pow(10,9));
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp<min)
            {
                min=temp;
            }
            if(temp>=max)
            {
                max=temp;
            }
        }
        if(min<0)
        {
            cout<<min<<endl;
        }
        else 
        {
            cout<<max<<endl;
        }
        
    }
    return 0;
}