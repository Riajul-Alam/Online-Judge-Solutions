//Bismillahir Rahmanir Raheem
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
  ll n, m, x, y, z, k, sum = 0, c1 = 0, c2 = 0, ans = 0;
  cin >> n >> k; // string s;
  for (int i = 1; i <= k - 3; i++) {
   cout << 1 << " ";
  }
  n = (n - k + 3);
  if (n % 2 == 0) {
   if (n == 4) {
    cout << 1 << " " << 1 << " " << 2 << endl;
   } else {
    x = (n - 2) / 2;
    if (x % 2 == 0) {cout << 2 << " " << (n - 2) / 2 << " " << (n - 2) / 2 << endl;}
    else {cout << n / 2 << " " << (n / 2) / 2 << " " << (n / 2) / 2 << endl;}
   }
  } else {
   if (n == 3) {
    cout << 1 << " " << 1 << " " << 1 << endl;
   } else {
    cout << 1 << " " << (n - 1) / 2 << " " << (n - 1) / 2 << endl;
   }
  }
 
 }
}