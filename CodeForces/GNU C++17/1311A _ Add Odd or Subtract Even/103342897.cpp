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
  ll n, m, x, y, z, k, c1 = 1, c2 = 1, total = 1, sum = 0;
  cin >> n >> m;
 
  if (n >=m)
  {
   sum = abs(m - n);
   if (sum == 0)
   {
    cout << 0 << endl;
   }
   else if(sum%2==0)
   {
   cout << 1 << endl; 
   }
   else
   {
    cout << 2 << endl;
   }
  }
  else
  {
   sum = abs(m - n);
   if (sum == 0)
   {
    cout << 0 << endl;
   }
   else if(sum%2==0)
   {
   cout << 2 << endl; 
   }
   else
   {
    cout << 1 << endl;
   }
  }
 
 }
}