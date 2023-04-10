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
    ll n,m,x,y,z;
    cin>>n;
    
    if(n==1){
     cout<<1<<endl;return;
    }else if(n==2){
     cout<<2<<endl;return;
    }
    x=n/2,y=0;
    if(n%3==0){
     x=n/3;
     for(int i=0;i<x;i++){
      cout<<2<<1;
     }cout<<endl;
    }
    else if(n%3==2){
     x=(n/3);
     for(int i=0;i<x;i++){
      cout<<2<<1;
     }cout<<2<<endl;
    }
    else{
     x=(n/3);
     cout<<1;
     for(int i=0;i<x;i++){
      cout<<2<<1;
     }cout<<endl;
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
   ll t;cin>>t;while(t--) 
   solve();          
}