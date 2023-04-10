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
 int t;
 cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, s1 = 0, s2 = 0, s = 0, c1 = 0, c2 = 0, ans = 0;
  cin >> n >> k;
  if (k > n) {
   x = (k / n);
   y = (k % n);
   if (y == 0)
   {
    cout << x << endl;
   }
   else
   {
    cout << x + 1 << endl;
   }
  }
  else
  {
   x = (n % k);
   if (x==0)
   {
    cout << 1 << endl;
   }
   else
   {
    cout << 2 << endl;
   }
  }
 
 }
}