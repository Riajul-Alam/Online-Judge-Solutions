#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug cout<<"OK"<<endl;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, s1 = 0, s2 = 0, s = 0, c1 = 0, c2 = 0, ans = 0;
  cin >> n >> m;
  ll a[100005];
  vector<ll>v;
  for (int i = 0; i < n; i++)
  {
   cin >> a[i];
   s += a[i];
  }
  vector<pair<ll, ll> >vp;
  ll minCount = 10000000000, value;
  for (int i = 0; i < n; i++)
  {
   if (a[i] % m == 0)
   {
    x = a[i], y = 0;
    ll Count = 0, Cnt = 0;
    while (x % m == 0 && x>0)
    {
     Count++;
     x = x / m;
    }
    vp.push_back(make_pair(a[i], Count));
   }
   else
   {vp.push_back(make_pair(a[i], 0));}
  }
 
  for (auto q : vp)
  {
   minCount = min(minCount, q.ss);
  }
  for(auto q:vp)
  {
   s1=s1+(q.ff*minCount);
  }
  for (auto q : vp)
  {
   if (q.ss == minCount)
   {
    break;
   }
   else
   {
    s1 = s1 + q.ff;
   }
  }
  cout << s + s1 << endl;
 }
}