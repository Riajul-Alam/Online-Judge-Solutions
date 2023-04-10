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
 int t;
 cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, s1 = 0, s2 = 0, p = 0, c1 = 0, c2 = 0;
  cin >> n;
  ll Count = 0;
  vector<ll>v;
  if (n == 1)
  {
   cout << 9;Count=1;
  }
  else if (n == 2)
  {
   cout << 98;Count=2;
  }
  else
  {
   cout << 989; Count = 3;
  }
  while (Count < n)
  {
   for (int i =0; i<=9; i++)
   {
    Count++;
    cout<<i;
    if (Count == n) {break;}
   }
  }
 
  cout << endl;
 }
}