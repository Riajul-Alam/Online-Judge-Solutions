//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define pf push_front
#define in insert
#define ppb pop_back
#define ppf pop_front
#define nl '\n'
#define sp ' '
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define mem(a,b) memset(a,b,sizeof(a))
#define Find(a,x) find(all(a),x)
#define LB(a,X) lower_bound(all(a),X)-a.begin()
#define UB(a,X) upper_bound(all(a),X)-a.begin()
#define toll(a) atoll(a.c_str())
string tostr(ll a) {stringstream rr; rr << a; return rr.str();}
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
vector<ll>primes;
vector<ll>List;
vector<ll>sieve(ll n)
{
 vector<bool>mark(n, 0);
 for (ll i = 3; i * i <= n + 1; i += 2)
 {
  if (mark[i] == 0)
  {
   for (ll j = i * i; j <= n; j += i)
   {
    mark[j] = 1;
   }
  }
 }
 primes.push_back(2);
 for (ll i = 3; i <= n; i += 2)
 {
  if (mark[i] == 0)
  {
   primes.push_back(i);
  }
 }
 return primes;
}
void solve()
{
 int n, m, i, j, zero = 0, Count = 0, ans = 0;
 cin >> n >> m;
 ll one = 0;
 vector<string>s(n + 10);
 for (int i = 0; i < n; i++)cin >> s[i];
 
 for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++)
  {
   if (s[i][j] == '0')zero++;
   else one++;
   if (i + 1 < n && s[i][j] == '0' && s[i + 1][j] == '0') {
    Count++;
   }
   if (i - 1 >= 0 && s[i][j] == '0' && s[i - 1][j] == '0') {
    Count++;
   }
   if (j + 1 < m && s[i][j] == '0' && s[i][j + 1] == '0') {
    Count++;
   }
   if (j - 1 >= 0 && s[i][j] == '0' && s[i][j - 1] == '0') {
    Count++;
   }
   if (s[i][j] == '1')
   {
    if (i + 1 < n && j - 1 >= 0) {
     if (s[i + 1][j] == '0' && s[i][j - 1] == '0') {
      Count++;
     }
    }
    if (i + 1 < n && j + 1 < m) {
     if (s[i + 1][j] == '0' && s[i][j + 1] == '0') {
      Count++;
     }
    }
    if (i - 1 >= 0 && j + 1 < m) {
     if (s[i - 1][j] == '0' && s[i][j + 1] == '0') {
      Count++;
     }
    }
    if (i - 1 >= 0 && j - 1 >= 0) {
     if (s[i - 1][j] == '0' && s[i][j - 1] == '0') {
      Count++;
     }
    }
   }
  }
 }
 if (zero >= 2) {ans = one; if (Count == 0)ans--;}
 else ans = (n * m) - 2;
 cout << ans << endl;
 return;
 
}
 
int main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
 fast;
 ll t; cin >> t; while (t--)
  solve();
}