#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug cout<<"OK"<<endl;
int main()
{
 //fast;
 int t = 1;
 //cin>>t;
 while (t--)
 {
  ll n, m, x, y, z, k, s1 = 0, s2 = 0, s = 0, c1 = 0, c2 = 0, ans = 0;
  cin >> n;
  string st;
  cin >> st;
  map<char, ll>mp;
  for (int i = 0; i < st.size(); i++)
  {
   mp[st[i]]++;
  }
  vector<char>v;
  for (auto q:mp)
  {
   if (q.ss%n!=0)
   {
    c1++; break;
   }
   for(int i=0;i<(q.ss/n);i++)
   {
   v.push_back(q.ff); 
   }
  }
  if (c1 != 0)
  {
   cout << -1 << endl;
  }
  else
  {
   for(int i=1;i<=n;i++)
   {
    for(auto it:v)
    {
     cout<<it;
    }
   }
   cout<<endl;
  }
 
 }
}