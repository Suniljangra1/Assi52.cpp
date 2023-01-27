#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char,int> r;
    string str ="ceabaacb";
    for(int i=0;i<str.length(); i++)
    {
        r[str[i]]++;
    }
    
    for(auto it : r)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
}