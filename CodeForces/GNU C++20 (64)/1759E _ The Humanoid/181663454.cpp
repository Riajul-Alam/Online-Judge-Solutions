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
#define vvi vector<vi>
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
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#define bug2(x,y) cerr<<#x<<" "<<#y<<endl; _print(x);cerr<<" ";_print(y);cerr<<endl;
#define bug3(x,y,z) cerr<<#x<<" "<<#y<<" "<<#z<<endl; _print(x);cerr<<" ";_print(y);cerr<<" ";_print(z);cerr<<endl;
#else
#define debug(x)
#define bug2(x,y)
#define bug3(x,y,z)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T>void _print(vector<vector<T>> &v){cerr << "[ ";for (auto i : v){_print(i);}cerr << " ]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T,class V> void printpair(vector<pair<T,V>>p){for(auto q:p)cout<<q.ff<<" "<<q.ss<<endl;}
template <class T> void print(vector<T>v){for (T i : v) {cout<<i<<" ";}cout<<endl;}
const ll mod = 1e9 + 7;
#define eps 1e-10
#define INF 1e18
#define pqmx priority_queue<ll>
#define pqmn priority_queue<ll,vector<ll>,greater<ll>>
#define pqpllmx priority_queue<pair<ll, ll>>
#define pqpllmn priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>
template <class T> void _print(priority_queue<T,vector<T>,greater<T>> pq){cerr<<"[ ";while(!pq.empty()) {cerr<<pq.top()<<" ";pq.pop();}cerr<<"]";}
template <class T> void _print(priority_queue<T>pq){cerr<<"{ ";while(!pq.empty()) {cerr<<pq.top()<<",";pq.pop();}cerr<<"}";}
template <class T> void _print(priority_queue<pair<T,T>,vector<pair<T,T>>,greater<pair<T,T>>>pq){cerr<<"[";while(!pq.empty()) {cerr<<"{"<<pq.top().ff<<" "<<pq.top().ss<<"}";pq.pop();}cerr<<"]";}
template <class T> void _print(priority_queue<pair<T, T>>pq){cerr<<"[";while(!pq.empty()) {cerr<<"{"<<pq.top().ff<<" "<<pq.top().ss<<"}";pq.pop();}cerr<<"]";}
/*#define N 200005
ll dp[N][3][3];*/
ll f(ll i,ll g,ll b,vector<ll>&a,ll power){
 if(i>=sz(a) || (b<=0 && g<=0 && a[i]>=power)){
  return 0;
 }
/* if(dp[i][g][b]!=-1){
  return dp[i][g][b];
 }*/
 ll x=0,y=0,z=0,z1=0;
 if(power>a[i]){
  //cout<<"YES "<<a[i]<<" "<<power<<endl;
  x=1+f(i+1,g,b,a,power+(ll(a[i]/2)));
  ll val=power+((a[i]/2));
/*  if(g==2 && b==1){
   // g g b
   x=max(x,f(i+1,g-1,b,a,val*2));
   x=max(x,f(i+1,g-2,b,a,val*2*2));
   x=max(x,f(i+1,g-2,b-1,a,val*2*2*3));
   // g b g
   x=max(x,f(i+1,g-1,b,a,val*2));
   x=max(x,f(i+1,g-1,b-1,a,val*2*3)); 
   x=max(x,f(i+1,g-2,b,a,val*2*2*3));
   // b g g
   x=max(x,f(i+1,g,b-1,a,val*3));
   x=max(x,f(i+1,g-1,b-1,a,val*2*3));
   x=max(x,f(i+1,g-2,b-1,a,val*2*2*3));
  }
  else if(g==1 && b==1){
   x=max(x,f(i+1,g,b-1,a,val*3));
   x=max(x,f(i+1,g-1,b-1,a,val*2*3));
   // gb
   x=max(x,f(i+1,g-1,b,a,val*2));
   x=max(x,f(i+1,g-1,b-1,a,val*2*3));
  }
  else if(g && b==0){
   x=max(x,f(i+1,g-1,b,a,val*2));
   if(g-2>=0)x=max(x,f(i+1,g-2,b,a,val*2*2));
  }
  else if(b&&!g){
   x=max(x,f(i+1,g,b-1,a,val*3));
  }*/
 }
 else{
  //cout<<"YES "<<a[i]<<" "<<power<<endl;
  if(g==2 && b==1){
   // g g b
   x=max(x,f(i,g-1,b,a,(power)*2));
   if(power*2<a[i])x=max(x,f(i,g-2,b,a,(power)*2*2));
   if(power*2*2<a[i])x=max(x,f(i+1,g-2,b-1,a,(power)*2*2*3));
   // g b g
   x=max(x,f(i,g-1,b,a,(power)*2));
   if(power*2<a[i])x=max(x,f(i,g-1,b-1,a,(power)*2*3)); 
   if(power*2*3<a[i])x=max(x,f(i,g-2,b-1,a,(power)*2*2*3));
   // b g g
   x=max(x,f(i,g,b-1,a,(power)*3));
   if(power*3<a[i])x=max(x,f(i,g-1,b-1,a,(power)*2*3));
   if(power*3*2<a[i])x=max(x,f(i,g-2,b-1,a,(power)*2*2*3));
  }
  else if(g==1 && b==1){
   x=max(x,f(i,g,b-1,a,(power)*3));
   if(power*3<a[i])x=max(x,f(i,g-1,b-1,a,(power)*2*3));
   // gb
   x=max(x,f(i,g-1,b,a,(power)*2));
   if(power*2<a[i])x=max(x,f(i,g-1,b-1,a,(power)*2*3));
  }
  else if(g && !b){
   x=max(x,f(i,g-1,b,a,(power)*2));
   if(g-2>=0 && power*2<a[i])x=max(x,f(i+1,g-2,b,a,(power)*2*2));
  }
  else if(b&&!g){
   x=max(x,f(i,g,b-1,a,(power)*3));
  } 
 }
 //debug(x)
 //dp[i][g][b]=x;
 return x;
}
 
void solve()
{
    ll n,m,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(all(a));
/*    for(int i=0;i<=sz(a);i++){
     for(int j=0;j<3;j++){
      for(int k=0;k<3;k++){
       dp[i][j][k]=-1;
      }
     }
    }*/
    cout<<f(0LL,2LL,1LL,a,m)<<endl;
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