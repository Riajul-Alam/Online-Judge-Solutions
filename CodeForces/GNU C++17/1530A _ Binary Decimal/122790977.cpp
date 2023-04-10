#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
 int t=1;
 cin>>t;
 while(t--)
 {
  string s;
  cin>>s;
  vector<ll>v;
   for(int i=0;i<s.size();i++)
   {
          v.push_back(s[i]-'0');
   }
   sort(v.begin(),v.end(),greater<ll>());
   cout<<v[0]<<endl;
 }
}