#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={2,4,7,9,16,49},ans,count=0;
    int n= sizeof(ar)/sizeof(ar[0]);
    unordered_map<int,int> r;
    for(int i=0; i<n; i++)
    {
        ans = ar[i] * ar[i];
        for(int j =i+1; j<n; j++){
        if(ar[j] == ans)
        {
        r.insert(make_pair(ar[i],1));
        count++;
        }
        }
    }
    cout<<"value of square is -> "<<count<<endl;
    for(auto it : r)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
}