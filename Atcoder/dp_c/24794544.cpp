
//Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mkp make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define debug(x) cout<<#x<<" "<<x<<endl;
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;

// Problem-D
ll N, W, w[109], v[109];
ll dp[109][100009];
ll f(ll id, ll wt) {
    if(id==N)
        return 0;
 
    if(dp[id][wt] != -1)
        return dp[id][wt];
 
    ll ans=f(id+1,wt);
 
    if(w[id] + wt <= W)
        ans = max(ans,f(id+1,wt+w[id])+v[id]);
 
    return dp[id][wt] = ans;
}
 
 
void solve() {
    memset(dp, -1, sizeof(dp));
    cin>>N>>W;
    for(int i = 0; i < N; i++) {
        cin>>w[i]>>v[i];
    }
    cout<<f(0, 0)<<endl;
 
}
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast; 
   solve();         	
}