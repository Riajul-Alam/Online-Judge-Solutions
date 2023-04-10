//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define nline "\n"
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define  mem(a,b)   memset(a,b,sizeof(a))
#define dbg(x) cout<<#x<<" "<<x<<endl;
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define toll(a) atoll(a.c_str())
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
template <class T> void print(vector<T>v){for (T i : v) {cout<<i<<" ";}cout<<endl;}
const ll mod = 1e9 + 7;
void solve()
{
    ll n,m,x,y;
    cin>>n;
    vector<ll>arr(n);
    ll summ=0;
    map<long long,long long>Mp,Mp1;
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
     summ=summ+arr[i];Mp[arr[i]]++;
    }
    if(sz(Mp)>7){
      cout<<"NO"<<endl;return;
    }
    vector<ll>final;
    for(auto tm:Mp){
     for(int i=0;i<min(ll(4),tm.ss);i++)
     {
      final.pb(tm.ff);
     }
    }
    for(int i=0;i<sz(final);i++)
    {
     for(int j=0;j<sz(final);j++)
     {
      if(i==j){
       continue;
      }
      for(int l=0;l<sz(final);l++)
      {
       if(i==l || j==l){
        continue;
       }
       ll sum=final[i]+final[j]+final[l];
       if(Mp[sum]==0)
       {
         cout<<"NO"<<endl;return;
       }
      }
     }
    }
    cout<<"YES"<<endl;
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