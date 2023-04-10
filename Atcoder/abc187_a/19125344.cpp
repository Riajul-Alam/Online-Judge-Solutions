#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ff first
#define ss second
#define pb push_back
#define debug cout<<"OK"<<endl;
int main()
{
  ll t=1;
  //cin >> t;
  while (t--)
  {
    ll n;
    cin>>n;
    map<string,ll>mp;
    vector<string>v;
    ll Count=0;
    while(n--)
    {
      string s;
      cin>>s;
      if(s[0]=='!')
      {
        string s1="";
        for(int i=1;i<s.size();i++)
        {
          s1=s1+s[i];
        }
        v.push_back(s1);
      }
      else
      {
        mp[s]++;
      }
    }
    for(int i=0;i<v.size();i++)
    {
      if(mp[v[i]])
      {
        cout<<v[i]<<endl;
        Count++;break;
      }
    }  
    if(Count==0)
    {
      cout<<"satisfiable"<<endl;
    }  
  }


}

