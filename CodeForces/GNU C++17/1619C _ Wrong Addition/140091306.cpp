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
#define fnd(a,x) find(all(a),x) // indicate FO index=(pos-a.begin())
#define LB(a,X) lower_bound(all(a),X)-a.begin()
#define UB(a,X) upper_bound(all(a),X)-a.begin()
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define toll(a) atoll(a.c_str())
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void print(vector<T>v){for (T i : v) {cout<<i<<" ";}cout<<endl;}
const ll mod = 1e9 + 7;
/*bool check(string s,string st,string ans)
{
 vector<string>vs;
 reverse(all(s));
 reverse(all(st));
 debug(s);
 debug(st)
 for(int i=0;i<min(sz(s),sz(st));i++)
 {
  ll x=s[i]-'0';
  ll y=st[i]-'0';
  ll sum=x+y;
  string stt=tostr(sum);
  vs.pb(stt);
 }
 if(sz(s)>sz(st))
 {
  for(int i=sz(st);i<sz(s);i++)
  {
   string tts="";
   tts+=s[i];
   vs.pb(tts);
  }
 }
 else if(sz(s)<sz(st)){
  for(int i=sz(s);i<sz(st);i++)
  {
   string tts="";
   tts+=st[i];
   vs.pb(tts); 
  }
 }
 reverse(all(vs));
 string nw="";
 for(int i=0;i<sz(vs);i++)
 {
  nw+=vs[i];
 }
 return ans==nw;
}*/
bool check2(string s,string st,string ans)
{
 //debug("YES")
 debug(s)
 debug(st)
 vector<string>vs;
 ll n=sz(s)-1,m=sz(st)-1;
 while(n>=0 && m>=0)
 {
  ll x=s[n]-'0';
  ll y=st[m]-'0';
  ll sum=x+y;
  string stt=tostr(sum);
  vs.pb(stt);n--,m--;
 }
 while(n>=0)
 {
  ll x=s[n]-'0';
  ll sum=x;
  string stt=tostr(sum);
  vs.pb(stt);n--;  
 }
 while(m>=0)
 {
  ll x=st[m]-'0';
  ll sum=x;
  string stt=tostr(sum);
  vs.pb(stt);m--;   
 }
 reverse(all(vs));
 debug(vs);
 string nw="";
 for(int i=0;i<sz(vs);i++)
 {
  nw+=vs[i];
 }
 return ans==nw;
}
 
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    string s,t,an="";
    cin>>s>>t;
    n=sz(s),m=sz(t);
    ll j=m-1;
    for(int i=n-1;i>=0;i--)
    {
     if(j<0)break;
     x=s[i]-'0';
     y=t[j]-'0';
     string tmp="";tmp+=t[j];
     if(y<x)
     {
      j--;
      tmp+=t[j];
      reverse(all(tmp));
      z=toll(tmp);
      ll dn=z-x;
      string nw=tostr(dn);
      reverse(all(nw));
      an+=nw;
      j--;
     }
     else
     {
      z=y-x;
      string dn=tostr(z);
      reverse(all(dn));
      an+=dn;j--;
     }
    }
    while(j>=0)
    {
     an+=t[j];j--;
    }
    ll dont=toll(an);
    reverse(all(an));
    c1=0,c2=0;
    debug(dont)
    if(check2(s,an,t)==true && dont!=0){
     debug("YES")
     for(int i=0;i<sz(an);i++)
     {
      if(c1==0 && an[i]=='0')continue;
      cout<<an[i];c1++;c2++;
     }
     if(c1)cout<<endl;     
    }
    else{
     string sttt="";
     ll tpp=0;
     for(int i=sz(s);i<sz(t);i++){
      sttt+=t[tpp];tpp++;
     }
     ll pp=sz(s)-1,qq=sz(t)-1;
     for(int i=0;i<sz(s);i++)
     {
      sttt+='0';
     }
     ll lastt=toll(sttt);
     if(lastt==0){
      c2++;
      cout<<-1<<endl;return;
     }
     if(check2(s,sttt,t)){
      cout<<sttt<<endl;c2++;
     }
     else{
      cout<<-1<<endl;c2++;
     }
    }
    if(c2==0){
     cout<<-1<<endl;
    }
 
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