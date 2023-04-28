//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld; 
#define pb push_back
#define ff first
#define ss second
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
const ll mod = 1e9 + 7;
#define eps 1e-10
#define INF 1e18

void solve()
{
    ll n,m,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>k;
    vector<ll>a(n,0);
    for(int i=0;i<n;i++)
    {
      string s;cin>>s;reverse(all(s));
      for(int j=0;j<k;j++){
        a[i]+=(s[j]=='1')*(1<<j);
      }
    }
    ans=INF;
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++){
        ans=min(ans,ll(__builtin_popcountll(a[i]^a[j])));
      }
    }
    cout<<ans<<endl;

}

int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast;
  // ll t;cin>>t;while(t--) 
   solve();           
}