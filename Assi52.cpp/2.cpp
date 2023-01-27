// copy one to another map
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multimap<int,int> l={
        {1,10},
        {2,20},
        {3,30},
        {4,40},
        {5,50},
        {6,60}
        };
        unordered_multimap<int,int> r;
        r.swap(l);
        for(auto it: r)
        {
            cout<<"Key "<<it.first<<" Value ->"<<it.second<<endl;
        }
}