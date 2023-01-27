// find the frequnancy of word and find the maximum frequancy of the word in the program
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int a[]={1,2,5,4,7,4,3,2,7};
    int n= sizeof(a)/sizeof(a[0]);
    unordered_map<int,int> m;
    for(int i=0; i<n; i++)
    {
         m[a[i]]++;
    }
    int min,maxV;
    for(auto it : m)
    {
        int num = it.first;
        int freq = it.second;
        if(freq< min)
        {
            min = freq ;
            maxV = num;
        }
        else if(freq==min && maxV <num ) {
            maxV = num;
        }
    }
    cout<<maxV;
}