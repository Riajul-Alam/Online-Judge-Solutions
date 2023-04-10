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
    cin>>n;
    vector<ll>br(n);
    for(int i=0;i<n;i++)
    {
      cin>>br[i];
    }
    sort(all(br));
    ll Count=0,answer=0;
    for(ll i=1;i<=n;i++){
      ll curmaxi=i;Count=0;ll x=curmaxi,ok=0;
      ll y=curmaxi;
      ll L=0,R=n-1;
      while(L<=R){
        if(ok==0){if(br[R]<=curmaxi){
            Count++;ok=1;curmaxi--;}R--;
        }else{
          if(br[L]+y<=curmaxi){Count++;ok=0;curmaxi--;
          }else{ok=0;}
          L++;y--;
        }
      }
      if(curmaxi<=0)answer=max(answer,x);
    }
    cout<<answer<<endl;return;
 
 
 
 
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