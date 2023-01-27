// create a  unordered_multimap
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multimap<int,int> f;
    f.insert(make_pair(1,20));
    f.insert(make_pair(2,10));
    f.insert({3,40});
    f.insert({4,50});
    for(auto it:f)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
}