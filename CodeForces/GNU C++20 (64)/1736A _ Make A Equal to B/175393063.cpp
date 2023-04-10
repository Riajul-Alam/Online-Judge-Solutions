//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vvl vector<vl>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpl vector<pll>
#define f0(b) for(int i=0;i<(b);i++)
#define f00(b) for(int j=0;j<(b);j++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define toll(a) atoll(a.c_str())
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
#define eps 1e-10
#define INF 1e18
 
void solve()
{
    ll n,m,k,p,q,ans=0;
    cin>>n;
    vector<ll>a(n),br(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<n;i++){cin>>br[i];}
    p=0;
    for(int i=0;i<n;i++){
      if(a[i]!=br[i]){
        p++;
      }
    }
    if(a==br){
      cout<<0<<endl;return;
    }
    q=0;sort(all(a));sort(all(br));
    for(int i=0;i<n;i++){
      if(a[i]!=br[i]){q++;}
    }
    if(p!=q){
      ans++;
    }
    ans+=q;cout<<ans<<endl;return;
 
 
 
 
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