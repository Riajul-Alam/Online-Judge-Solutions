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
#define mod 1000000007;
ll big_mod(ll base, ll power)
{
 if (power == 0)    return 1;
 else if (power % 2 == 1)
 {
  ll p1 = base % mod;
  ll p2 = (big_mod(base, power - 1)) % mod;
  return (p1 * p2) % mod;
 }
 else if (power % 2 == 0)
 {
  ll p1 = (big_mod(base, power / 2)) % mod;
  return (p1 * p1) % mod;
 }
}
int main()
{
 int t;
 cin >> t;
 while (t--) {
  ll n, m, x, y, z, k;
  cin>>n>>m;
  cout << big_mod(n, m) << endl;
 
 }
}