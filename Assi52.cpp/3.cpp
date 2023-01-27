// using reverse function in unordered multimap
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multimap<int,int > k;
    k.insert({1,10});
    k.insert({2,20});
    k.insert({3,39});
    k.insert({4,49});
    k.insert({5,78});
    k.insert({6,89});
    k.reserve(5);
    for(auto it :k)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
}