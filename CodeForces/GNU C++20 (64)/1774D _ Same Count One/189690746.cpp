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
struct A
{
 ll removeInd,addInd,Ind;
};
void solve()
{
    ll n,m,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    vector<string>a;
    vector<pair<ll,ll>>fr;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
     string tm;
     char s[m];
     for(int j=0;j<m;j++){
      cin>>s[j];tm+=s[j];
     }
     a.pb(tm);
    }
    multiset<pair<ll,ll>>ms;
    vector<A>vp;
    ll one=0;
    f0(n){
     c1=0;
     f00(m){
      if(a[i][j]=='1'){one++;c1++;}
     }
     fr.pb({c1,i});
     ms.insert({c1,i});
    }
    debug(ms)
    if(one%n){
     cout<<-1<<endl;return;
    }
    ll mxfr=one/n;
    while(1){
     pair<ll,ll>pr1,pr2;
     pr1=*ms.begin();
     pr2=*--ms.end();
     x=pr1.ff,y=pr2.ff;
     ms.erase(ms.begin());
     ms.erase(--ms.end());
     if(x==mxfr && y==mxfr)break;
     ll l,r;
     l=pr1.ss;
     r=pr2.ss;
     for(int i=0;i<m;i++){
      if(a[r][i]=='1' && a[l][i]=='0'){
       swap(a[r][i],a[l][i]);x++;y--;
       A point;
       point.removeInd=r;
       point.addInd=l;
       point.Ind=i;
       vp.push_back(point);
      }
      if(x==mxfr || y==mxfr)break;
     }
     ms.insert({x,l});
     ms.insert({y,r});
    }
    cout<<sz(vp)<<endl;
    for(auto q:vp){
     cout<<q.addInd+1<<" "<<q.removeInd+1<<" "<<q.Ind+1<<endl;
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