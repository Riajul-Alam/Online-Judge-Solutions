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
void solve()
{
 ll n, m, x, y, z, k,c1=0;
 string s;
 cin >> s;
 string st, st1;
 n = sz(s);
 c1 = 0;
 for (int i = n - 2; i >= 0; i--)
 {
  x = (s[i + 1] - '0') + (s[i] - '0');
  if (x >= 10 && c1 == 0) {
   c1++;
   string stt;
   stt = tostr(x);
   //cout<<stt<<endl;
   reverse(all(stt));
   st += stt;
  } else {
   if (c1 == 0)st += s[i + 1];
   else st += s[i];
  }
 }
 //cout<<st<<endl;
 if (c1) {
  reverse(all(st));
  cout << st << endl;
 } else {
  x = (s[0] - '0') + (s[1] - '0');
  cout << x;
  for (int i = 2; i < n; i++) {
   cout << s[i];
  } cout << endl;
 }
 
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