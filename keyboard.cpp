#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<char,char>l;
    unordered_map<char,char>r;
    l['q']='w';
    l['w']='e';
    l['e']='r';
    l['r']='t';
    l['t']='y';
    l['y']='u';
    l['u']='i';
    l['i']='o';
    l['o']='p';
    l['a']='s';
    l['s']='d';
    l['d']='f';
    l['f']='g';
    l['g']='h';
    l['h']='j';
    l['j']='k';
    l['k']='l';
    l['l']=';';
    l['z']='x';
    l['x']='c';
    l['c']='v';
    l['v']='b';
    l['b']='n';
    l['n']='m';
    l['m']=',';
    l[',']='.';
    l['.']='/';

    r['w']='q';
    r['e']='w';
    r['r']='e';
    r['t']='r';
    r['y']='t';
    r['u']='y';
    r['i']='u';
    r['o']='i';
    r['p']='o';
    
    r['s']='a';
    r['d']='s';
    r['f']='d';
    r['g']='f';
    r['h']='g';
    r['j']='h';
    r['k']='j';
    r['l']='k';
    r[';']='l';

    r['x']='z';
    r['c']='x';
    r['v']='c';
    r['b']='v';
    r['n']='b';
    r['m']='n';
    r[',']='m';
    r['.']=',';
    r['/']='.';

    char c;
    cin>>c;
    string s;
    cin>>s;
    
        if(c=='R')
        {
            for(int i=0;i<s.size();i++)
            {
                cout<<r[s[i]];
                // cout<<"here"<<endl;
            }
            cout<<endl;
        }
        else
        {
           for(int i=0;i<s.size();i++)
            {
                cout<<l[s[i]];
            }
            cout<<endl; 
        }
    
    return 0;
}