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
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
void solve()
{
    ll n,m,x,y,c1=0,c2=0,ans=0;
 
    string s;cin>>s;
    y=sz(s);
    if(toll(s)%7==0){
     cout<<s<<endl;
     return;
    }
    vector<string>st;
    for(int i=0;i<=200;i++){
     x=i*7;
     string tt=tostr(x);
     if(sz(tt)==y)st.pb(tt);
    }
    ans=0;c1=0;
    vector<pair<ll,string>>vp;
    for(int i=0;i<sz(st);i++)
    {
     c1=0;
     for(int j=0;j<sz(st[i]);j++)
     {
      if(s[j]!=st[i][j]){
       c1++;
      }
     }
     vp.pb({c1,st[i]});
    }
    sort(all(vp));
    cout<<vp[0].ss<<endl;
    return;
 
 
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast;
   ll t;cin>>t;while(t--) 
   solve();          
}