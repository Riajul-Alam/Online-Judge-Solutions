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
void solve()
{
    ll n,m,x,y,z,k,c1=0,ans=0;
    cin>>n>>k;
    ans=1;
    ans+=(n-1)/2;
    if(k>ans){
     cout<<-1<<endl;return;
    }
    x=0;
    //debug(n);
    bool ok=true;
    for(int i=0;i<n;i++)
    {
     if(!ok){
      for(int j=0;j<n;j++){
       cout<<'.';
      }cout<<endl;
      ok=true;
     }
     else{
      ok=false;
      for(int j=0;j<n;j++)
      {
       if(x==j && c1<k){
        cout<<"R";c1++;
       }else{
 
        cout<<'.';
 
       }
      }
      cout<<endl;x+=2;
     }
 
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