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
    int n,m;
    cin>>n>>m;
    map<pair<int,int>,int>mpp1;
    for(int i=0;i<m;i++)
    {
      int x,y;cin>>x>>y;
      mpp1[{x,y}]++;
    }
    ll Count=0;
    for(int i=1;i<=n;i++){
      Count=0;
      for(int j=1;j<=n;j++){
        if(mpp1[{i,j}]==0)Count++;
      }
      if(Count==m){cout<<"YES"<<endl;return;}
    }
    for(int i=1;i<=n;i++){
      Count=0;
      for(int j=1;j<=n;j++){
        if(mpp1[{j,i}]==0){
          Count++;
        }
      }
      if(Count==n){cout<<"YES"<<endl;return;}
    }
 
 
     cout<<"NO"<<endl;
 
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