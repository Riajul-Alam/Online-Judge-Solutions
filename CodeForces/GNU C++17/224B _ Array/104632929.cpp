#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mkp make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug cout<<"OK"<<endl;
int main()
{
 fast;
 int t = 1;
 //cin>>t;
 while (t--)
 {
  ll n, m, x, y, z, k, s1 = 0, s2 = 0, s = 0, c1 = 0, c2 = 0, ans = 0;
  cin >> n >> k;
  ll a[100005];
  ll l, r;
  for (int i = 0; i < n; i++)
  {
   cin >> a[i];
  }
  l = 0; ll val = a[0];
  for (int i = 1; i < n; i++)
  {
   if (val == a[i])
   {
    l = i;
   }
   else
   {break;}
  }
  set<ll>st;
  bool ok = false;
  for (int i = l; i < n; i++)
  {
   if (st.size() == k)
   {
    ok = true;
    r = i;
    break;
   }
   st.insert(a[i]);
   if (st.size() == k)
   {
    ok = true;
    r = i;
    break;
   }
  }
  map<ll,ll>mp;
        for(int i=l;i<=r;i++)
        {
         mp[a[i]]++;
        }
        ll nl=l;
        for(int i=l;i<=r;i++)
        {
         if(mp[a[i]]>1)
         {
          mp[a[i]]--;
          if(mp.size()==k)
          {
                    nl++;
          }
          else
          {
           break;
          }
         }
         else
         {
          break;
         }
        }
  if(ok)
  {
   cout<<nl+1<<" "<<r+1<<endl;
  }
  else
  {
   cout<<-1<<" "<<-1<<endl;
  }
 
 }
}