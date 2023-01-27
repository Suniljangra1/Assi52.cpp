// find the frequency of the each word in unordered map
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word,str ="ineuron for ineuron ineuron quiz practice qa for";
    unordered_map<string,int> s;
    for(int i=0;i<str.length(); i++)
    {
        if(str[i]==' ')
        {
            if(s.find(word)==s.end())
            {
                s.insert({word,1});
                word="";
            }
            else {
                s[word]++;
                word="";
            }
        }
        else {
            word = word + str[i];
        }
    }
    // find out the last string in map
    if(s.find(word)==s.end())
    {
        s.insert({word,1});
        word = "";
    }
    else 
    s[word]++;

    for(auto it : s)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
}