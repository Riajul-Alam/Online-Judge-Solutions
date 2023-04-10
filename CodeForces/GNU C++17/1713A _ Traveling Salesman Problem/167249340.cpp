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
#define vvl vector<vl>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpl vector<pll>
#define vpls vector<pair<ll,string>
#define vpsl vector<pair<string,ll>>
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
void solve()
{
    ll n;
 
    cin>>n;
    ll x1=0,y1=0,x2=0,y2=0;
    for(int i=0;i<n;i++)
    {
     ll x,y;
      cin>>x>>y;
      if(x){
       if(x<0){
        x2=max(x2,abs(x));
       }else{
        x1=max(x1,abs(x));
       }
      }
      else{
       if(y<0){
        y2=max(y2,abs(y));
       }else{
        y1=max(y1,abs(y));
       }
      }
    }
    ll ans=(x1*2)+(x2*2)+(y1*2)+(y2*2);
    cout<<ans<<endl;
 
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