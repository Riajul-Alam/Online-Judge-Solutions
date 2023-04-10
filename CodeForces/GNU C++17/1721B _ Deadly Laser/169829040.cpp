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
 
#define vi vector<int>
#define vl vector<ll>
#define vvl vector<vl>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpl vector<pll>
#define vpls vector<pair<ll,string>
#define vpsl vector<pair<string,ll>>
 
#define f0(b) for(int i=0;i<(b);i++)
#define f00(b) for(int j=0;j<(b);j++)
#define f1(i,l,r) for(int i=l;i<r;i++)
#define rf1(i,r,l) for(int i=r-1;i>=l;i--)
#define f2(i,l,r) for(int i=l;i<=r;i++)
#define rf2(i,r,l) for(int i=r;i>=l;i--)
#define print1(x) cout<<x<<endl;
#define print2(x,y) cout<<x<<" "<<y<<endl;
#define print3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl;
 
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
void solve()
{
 ll n, m, i, j, x, y, d, Count1 = 0;
 
 cin >> n >> m >> x >> y >> d;
 for (int i = 2; i <= n; i++) {
  ll temp1, temp2; temp1 = abs(i - x); temp2 = abs(1 - y);
  if (d < temp2 + temp1) {
   Count1++;
  }
 }
 for (int i = 1; i <= m; i++) {
  ll temp1, temp2;
  temp1 = abs(n - x);
  temp2 = abs(i - y);
  if (temp2 + temp1 > d) {
   Count1++;
  }
 }
 if (Count1 == n + m - 1) {cout << n + m - 2 << endl; return;}
 Count1 = 0;
 for (int i = 1; i <= n; i++) {
  ll tm1, tm2;
  tm1 = abs(i - x);
  tm2 = abs(m - y);
  if (tm2 + tm1 > d) {
   Count1++;
  }
 }
 for (int i = 2; i <= m; i++) {
  ll tm1, tm2;
  tm1 = abs(1 - x);
  tm2 = abs(i - y);
  if (tm2 + tm1 > d) {
   Count1++;
  }
 }
 if (Count1 == n + m - 1) {
  cout << n + m - 2 << endl; return;
 }
 else {
  cout << -1 << endl; return;
 }
 
 
 
 
 
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