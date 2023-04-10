//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define pf push_front
#define in insert
#define eb emplace_back
#define ppb pop_back
#define ppf pop_front
#define nline "\n"
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fnd(a,x) find(all(a),x)
#define LB(a,X) lower_bound(all(a),X)-a.begin()
#define UB(a,X) upper_bound(all(a),X)-a.begin()
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define toll(a) atoll(a.c_str())
string tostr(ll a) {stringstream rr; rr << a; return rr.str();}
ll n, m;
void solve()
{
 int x, y, z, k, sum = 0, c1 = 0, c2 = 0, ans = 0;
 cin >> n >> m;
 bool vis[n][m];
 ll g[n][m];
 vector<string>a(n);
 for (int i = 0; i < n; i++)
 {
  cin >> a[i];
 }
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < m; j++)
  {
   if (a[i][j] == '1') {
    g[i][j] = 1;
   }
   else {
    g[i][j] = 0;
   }
  }
 }
 for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++)
  {
   ll one = 0, zero = 0;
   if (j - 1 >= 0) {
    if (g[i][j - 1] == 1)one++;
    else zero++;
   }
   if (j - 1 >= 0 && i + 1 < n) {
    if (g[i + 1][j - 1] == 1)one++;
    else zero++;
   }
   if (i + 1 < n) {
    if (g[i + 1][j] == 1)one++;
    else zero++;
   }
   if (g[i][j] == 1)one++;
   else zero++;
   if (one == 3 && zero == 1) {
    cout << "NO" << endl; return;
   }
   zero = 0, one = 0;
   if (j + 1 < m) {
    if (g[i][j + 1] == 1)one++;
    else zero++;
   }
   if (j + 1 < m && i + 1 < n) {
    if (g[i + 1][j + 1] == 1)one++;
    else zero++;
   }
   if (i + 1 < n) {
    if (g[i + 1][j] == 1)one++;
    else zero++;
   }
   if (g[i][j] == 1)one++;
   else zero++;
   if (one == 3 && zero == 1) {
    cout << "NO" << endl; return;
   }
  }
 }
 cout << "YES" << endl;
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