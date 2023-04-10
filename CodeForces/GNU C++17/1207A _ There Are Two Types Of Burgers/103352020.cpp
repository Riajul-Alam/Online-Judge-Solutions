#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mk make_pair
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, c1 = 1, c2 = 1, total = 0, sum = 0;
  cin >> n >> x >> y;
  ll p1, p2;
  cin >> p1 >> p2;
  total = (n / 2);
  if (p1 >= p2)
  {
   if (total >= x)
   {
    sum += (x * p1);
    total -= x;
   }
   else
   {
    sum += (total * p1);
    total = 0;
   }
   if (total >= y)
   {
    sum += (y * p2);
    total -= y;
   }
   else
   {
    sum += (total * p2);
    total = 0;
   }
  }
  else
  {
   if (total >= y)
   {
    sum += (y * p2);
    total -= y;
   }
   else
   {
    sum += (total * p2);
    total = 0;
   }
   if (total >= x)
   {
    sum += (x * p1);
    total -= x;
   }
   else
   {
    sum += (total * p1);
    total = 0;
   }
  }
  cout << sum << endl;
 
 }
}