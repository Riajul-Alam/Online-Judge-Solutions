//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define sp " "
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
    int n,m,s1=0;
    cin>>n;
    vector<ll>a(n);
    f0(n)cin>>a[i];
    if(n==1){cout<<a[0]<<endl;return;}
    s1+=a[0];//s1+=a[1];
    for(int i=1;i<n;i++){
      if(s1-a[i]>=0 && a[i]!=0){
        cout<<-1<<endl;return;
      }s1+=a[i];
    }
    s1=a[0];cout<<s1<<sp;
    for(int i=1;i<n;i++){
      s1+=a[i];cout<<s1<<" ";
    }
    cout<<endl;return;
 
 
 
 
 
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