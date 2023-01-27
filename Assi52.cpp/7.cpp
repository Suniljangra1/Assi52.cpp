// find the unique pair of he 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //   22,115,7,313,17,23,22
    int ar[]={2,15,11,7},ans,count=0;
    int n = sizeof(ar)/sizeof(ar[0]);
    unordered_map<int,int> s;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n; j++)
        {
            ans = ar[i] + ar[j];
            if(ar[i+1]+ar[j]!=ans)
            {
                count++;
            }
        }
    }
    cout<<count/n;

}