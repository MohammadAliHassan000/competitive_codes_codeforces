/* Mohammad Ali Hassan    */
/* Created 07-07-23 */


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input[10][2];
    for(int i=0;i<10;i++)
    {
        cin>>input[i][0]; //story
        cin>>input[i][1]; // name
    }

    // for(int i=0;i<10;i++) //check for correct input;
    // {
    //     cout<<input[i][0]<<" ";
    //     cout<<input[i][1]<<" ";
    //     cout<<endl;
    // }

    vector<int>out1;
    vector<string>temp;
    vector<vector<int>>out2;
    for(int i=0;i<10;i++)
    {
        int flag=0;
        int x=0;
        for(int j=0;j<temp.size();j++)
        {
            if(input[i][1]==temp[j])
            {
                x=j;
                flag=1;
            }
        }

        if(flag==0)
        {
            out1.push_back(i);
            temp.push_back(input[i][1]);
            vector<int>temp2;
            temp2.push_back(i);
            out2.push_back(temp2);
        }
        else 
        {

            out2[x].push_back(i);
        }
    }

    for(int i=0;i<out1.size();i++)
    {
        cout<<out1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<out2[1].size();j++)
        {
            cout<<out2[i][j]<<" ";
        }
        cout<<", ";
    }
    cout<<endl;
    return 0;
}
// for input
// string
// ali
// string
// amartya
// string
// amartya
// string
// amartya
// ai
// coding
// string
// aditya
// string
// aditya
// string
// aditya
// string
// sujoy
// string
// sujoy

