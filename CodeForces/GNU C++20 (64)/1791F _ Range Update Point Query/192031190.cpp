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
 
const ll N= 200005;
vector<ll>A(N);
//ll lazy[N*4],tree[N*4];
struct segtree{
  vector<ll>tree,lazy;
  segtree(ll n){
    tree.resize(4*n,0);
    lazy.resize(4*n,0);
  }
  void build(ll node,ll start,ll end)
  {
      if(start==end){
          // Leaf node will have a single element
          tree[node]=A[start];
      }
      else
      {
          ll mid=(start+end)>>1;
          // Recurse on the left child
          build(2*node,start,mid);
          // Recurse on the right child
          build(2*node+1,mid+1,end);
          // Internal node will have the sum of both of its children
          tree[node]=tree[2*node]+tree[2*node+1];
      }
  }
  
  void updateRange(ll node,ll start,ll end,ll l,ll r,ll val)
  {
      if(lazy[node]!=0)
      { 
          // This node needs to be updated
          tree[node]+=(end-start+1)*lazy[node];    // Update it
          if(start!=end)
          {
              lazy[node*2]+=lazy[node];                  // Mark child as lazy
              lazy[node*2+1]+=lazy[node];                // Mark child as lazy
          }
          lazy[node]=0;                                  // Reset it
      }
      if(start>end or start>r or end<l)              // Current segment is not within range [l, r]
          return;
      if(start>=l and end<=r)
      {
          // Segment is fully within range
          tree[node]+=(end-start+1)*val;
          if(start!=end)
          {
              // Not leaf node
              lazy[node*2]+=val;
              lazy[node*2+1]+=val;
          }
          return;
      }
      ll mid=(start+end)>>1;
      updateRange(node*2,start,mid,l,r,val);        // Updating left child
      updateRange(node*2+1,mid+1,end,l,r,val);   // Updating right child
      tree[node]=tree[node*2]+tree[node*2+1];        // Updating root with max value 
  }
 
  ll queryRange(ll node,ll start,ll end,ll l,ll r)
  {
      if(start>end or start>r or end<l)
          return 0;         // Out of range
      if(lazy[node]!=0)
      {
          // This node needs to be updated
          tree[node]+=(end-start+1)*lazy[node];            // Update it
          if(start!=end)
          {
              lazy[node*2]+=lazy[node];         // Mark child as lazy
              lazy[node*2+1]+=lazy[node];    // Mark child as lazy
          }
          lazy[node]=0;                 // Reset it
      }
      if(start>=l and end<=r)             // Current segment is totally within range [l, r]
          return tree[node];
      ll mid=(start+end)>>1;
      ll p1=queryRange(node*2,start,mid,l,r);         // Query left child
      ll p2=queryRange(node*2+1,mid+1,end,l,r); // Query right child
      return (p1+p2);
  }
};
ll f(ll tmp){
  ll sum=0;
  while(tmp){
    sum+=(tmp%10);tmp/=10;
  }
  return sum;
}
void solve()
{
    ll n,m,i,j,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    vector<ll>b(n+5);
    for(int i=1;i<=n;i++){
      cin>>b[i];
    }
    map<ll,ll>mp;
    for(ll i=1;i<=n;i++)
    {
      A[i]=0;//cin>>A[i];
    }
    segtree sg(n);
    sg.build(1,1,n);
    // 1 based
    while(m--)
    {
      ll l,r,v;
      cin>>i;
      if(i==1){
        cin>>l>>r;
        //l++;// l-given 0-based
        sg.updateRange(1,1,n,l,r,1);
      }else{
        cin>>l;
        ll tmp=sg.queryRange(1,1,n,l,l);
        ll last=b[l],cur=-1;debug(b[l])
        ll x1=tmp;
        tmp-=mp[l];
        while(tmp--){
          cur=f(last);
          if(cur==last)break;
          last=cur;
        }
        mp[l]=x1;
        b[l]=last;
        cout<<b[l]<<endl;
      }
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