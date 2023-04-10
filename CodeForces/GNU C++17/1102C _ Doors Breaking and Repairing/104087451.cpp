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
 fast;
 int t = 1;
 //cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, s1 = 0, s2 = 0, s = 0, c1 = 0, c2 = 0, ans = 0;
  cin >> n >> x >> y;
  ll a[100005];
  vector<ll>v;
  for (int i = 0; i < n; i++)
  {
   cin >> a[i];
   if (a[i]<=x) {v.push_back(a[i]);}
  }
  sort(a, a + n);
  if (x > y)
  {
   cout << n << endl; continue;
  }
  else
  {
   for (int i = 0; i < n; i += 2)
   {
    if (a[i] <= x)
    {
     c1++;
    }
   }
   cout << c1 << endl;
  }
 }
}