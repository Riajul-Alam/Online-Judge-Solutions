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

void solve()
{
    ll n,m,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    vector<ll>a(n),b,c;
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }
    x=n/2;
    ll total=pow(2,x);
    for(int i=1;i<total;i++){
      sum=0;c1=0;
      for(int j=0;j<x;j++){
        if(i&(1<<j)){
          sum+=a[j];c1++;
        }
      }
      if(c1)b.pb(sum);
      if(sum==m)ans++;
    }
    y=n-x;
    total=pow(2,y);
    for(int i=1;i<total;i++){
      sum=0,c1=0;
      for(int j=x,k=0;j<n;j++,k++){
        if(i&(1<<k)){
          sum+=a[j];c1++;
        }
      }
      if(c1)c.pb(sum);
      if(sum==m)ans++;
    }
    sort(all(b));
    sort(all(c));
    for(int i=0;i<sz(c);i++){
      x=m-c[i];
      if(x>0){
        ll lb=lower_bound(all(b),x)-b.begin();
        ll ub=upper_bound(all(b),x)-b.begin();
        ans+=(ub-lb);
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
   //ll t;cin>>t;while(t--) 
   solve();           
}
