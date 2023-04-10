//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define sp " "
 
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
#define eps 1e-10
#define INF 1e18
 
void solve()
{
    ll n,m;
    cin>>n>>m;
    if(n==1){cout<<n<<sp<<m<<endl;return;}
    if(m==1){cout<<n-1<<sp<<m<<endl;return;}
    cout<<n-1<<" "<<m-1<<endl;return;
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