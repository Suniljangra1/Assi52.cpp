// find the only array element with a single occurrence using unordered_map 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> r;
    int ar[]={2,3,5,4,6,7,8,9,2};
    int n= sizeof(ar)/sizeof(ar[0]);
    for(int i=0; i<n; i++)
    {
        r[ar[i]]++;
    }
    for(auto it : r)
    {
        if(it.second==1)
        {
            cout<<it.first<<"->"<<it.second<<endl;
        }
    }
}