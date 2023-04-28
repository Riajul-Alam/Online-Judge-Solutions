#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int Count=1,x,y,mx;
    cin>>s;
    vector<int>vt;
    vector<int>::iterator it;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1]){Count++;}
        else{vt.push_back(Count);Count=1;}
    }
    vt.push_back(Count);
    it=vt.begin();
    mx=0;
    it++;
    for(it=vt.begin();it!=vt.end();it++)
    {
        mx=max(mx,*it);
    }
    cout<<mx<<endl;
}