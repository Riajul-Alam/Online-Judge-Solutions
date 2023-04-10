
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

/*problem-A
ll n,a[100005];
ll dp[100005]; // step -01
// Recursive solution
ll f(ll i)
{
	if(i>=n-1) return 0;
	ll ans1=INT_MAX,ans2=INT_MAX;
	if(i+1<n)
	{
		ans1=abs(a[i]-a[i+1])+f(i+1);
	}
	if(i+2<n)
	{
		ans2=abs(a[i]-a[i+2])+f(i+2);
	}
	return min(ans2,ans1);
}
ll f(ll i)
{
	if(i>=n-1) return 0;
	if(dp[i]!=-1) return dp[i];
	ll ans1=INT_MAX,ans2=INT_MAX;
	if(i+1<n)ans1=abs(a[i]-a[i+1])+f(i+1);
	if(i+2<n)ans2=abs(a[i]-a[i+2])+f(i+2);
	return dp[i]=min(ans2,ans1);
}
void solve()
{   
	mem(dp,-1);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<f(0)<<endl;

}*/

/*//Problem-B
ll n,a[100005],k;
ll dp[100005];
ll f(ll i)
{
	if(i>=n-1) return 0;
	if(dp[i]!=-1) return dp[i];
	ll ans1=INT_MAX,ans2=INT_MAX;
	for(int j=1;j<=k;j++){
       if(j+i<n)ans1=min(ans1,abs(a[i]-a[i+j])+f(i+j));
	}
	return dp[i]=ans1;
}
void solve()
{   
	mem(dp,-1);
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<f(0)<<endl;

}*/
//Problem-C

/*ll n,a[100005][3],k;
ll dp[100005][3];// step -01
ll f(ll day,ll flag)
{
     if(day==n) return 0;
     if(dp[day][flag]!=-1)return dp[day][flag];// Step-03    
     ll maxi=0;
     if(flag==0)
     {
     	// Flag=0 means we are in 1st index
     	//Take 1st type
        maxi=max(a[day][0]+f(day+1,1),maxi);
        //take 2nd type 
        maxi=max(a[day][1]+f(day+1,2),maxi);
        // take 3rd type
        maxi=max(a[day][2]+f(day+1,3),maxi);
     }  
     else if(flag==1)
     {
     	// flag=1 means we take 1st type, last day(index)
     	// Take 2nd type
     	maxi=max(a[day][1]+f(day+1,2),maxi);
     	//take 3rd type
     	maxi=max(a[day][2]+f(day+1,3),maxi);
     }
     else if(flag==2)
     {
     	// flag=2 means we take 2st type, last day(index)
      	//Take 1st type
      	maxi=max(a[day][0]+f(day+1,1),maxi);
      	//Take 3rd Type
     	maxi=max(a[day][2]+f(day+1,3),maxi);    	
     }
     else
     {
     	// flag=3 means we take 3rd type, last day(index)
      	//Take 2nd type
     	maxi=max(a[day][1]+f(day+1,2),maxi);
       // Take 1st type
     	maxi=max(a[day][0]+f(day+1,1),maxi);
     }
     return dp[day][flag]=maxi;
     
}


void solve()
{   
	mem(dp,-1);// step-02
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<f(0,0)<<endl;

}*/
// Problem-D
// Bottom-Up Aproach  (ans 0 index e thake)
/*ll N, W, w[109], v[109],cnt=0;
ll dp[109][100009];
ll f(ll id, ll wt) {
	if(wt==W){cnt++;}
    if(id==N)return 0;
    if(dp[id][wt] != -1)return dp[id][wt];
    // not pick i
    ll ans=f(id+1,wt);
    // pick i
    if(w[id] + wt <= W){
        ans = max(ans,f(id+1,wt+w[id])+v[id]);
    }
    return dp[id][wt] = ans;
} 
void solve() {
    memset(dp, -1, sizeof(dp));
    cin>>N>>W;
    for(int i = 0; i < N; i++) {
        cin>>w[i]>>v[i];
    }
    f(0, 0);  
}*/

//Problem-E
/*ll N, W, w[109], v[109],cnt=0;
map<ll,ll>mp;
ll f(ll id, ll wt) {
	if(wt==W){cnt++;}
    if(id==N)return 0;
    if(dp[id][wt] != -1)return dp[id][wt];
    // not pick i
    ll ans=f(id+1,wt);
    // pick i
    if(w[id] + wt <= W){
        ans = max(ans,f(id+1,wt+w[id])+v[id]);
    }
    return dp[id][wt] = ans;
} 
void solve() {
    memset(dp, -1, sizeof(dp));
    cin>>N>>W;
    for(int i = 0; i < N; i++) {
        cin>>w[i]>>v[i];
    }
    cout<<f(0, 0)<<endl;
}*/

/*ll n,w, a[100009], b[100009];
ll dp[109][100009];
 
ll f(ll r, ll idx) {
    if(idx == n)
        return r == 0 ? 0 : INT_MAX;

    if(dp[idx][r] != -1)
    	return dp[idx][r];

    ll ans = f(r, idx + 1);
    if(b[idx] <= r)
    	ans = min(ans, a[idx] + f(r - b[idx], idx + 1));
     
    return dp[idx][r] = ans;
}

ll s(ll v_max) {
 
	for(ll i = v_max; i >= 0; i--) {
		if(f(i, 0) <= w)
			return i;
	}
	return 0;
}
void solve() {

       cin>>n>>w;
        memset(dp, -1, sizeof(dp));
 
        ll v_max = 0;
 
        for(ll i = 0; i < n; i++) {
            cin>>a[i]>>b[i];
            v_max += b[i];
        }
 
        cout<<s(v_max)<<endl;
}*/
 

 //Problem-F LCS
// Print path
/*string a,b;
ll n,m;
ll dp[3005][3005];
ll dr[3005][3005];
ll f(ll i,ll j)
{
    if(i==n || j==m)
    {
    	return 0;
    }
    ll &ret=dp[i][j];
    if(ret!=-1)return ret;
    if(a[i]==b[j])
    {
    	ret=1+f(i+1,j+1);// 1
    	dr[i][j]=1;
    }
    else{
    	ll a=f(i+1,j); // 2
    	ll b=f(i,j+1); // 3
    	if(a>b){
    		ret=a;
    		dr[i][j]=2;
    	}else{
    		ret=b;
    		dr[i][j]=3;
    	}
    }
    return ret;
}
void print(ll i,ll j)
{
    if(i==n || j==m){
    	return;
    } 
    if(dr[i][j]==1)
    {
    	cout<<a[i];
    	print(i+1,j+1);// 1
    }
    else if(dr[i][j]==2){
    	print(i+1,j); // 2
    }
    else if(dr[i][j]==3){
        print(i,j+1); // 3
    }
}
void solve()
{
  mem(dp,-1);
  cin>>a>>b;
  n=a.size(),m=b.size();
  f(0,0);
  print(0,0);
}*/
//Problem-G 
// Recursive solution 
/*vector<ll>graph[100005];
ll visited[100005];
vector<ll>v;
ll dfs(ll a)
{
    ll ret=0;
    for(ll i=0;i<graph[a].size();i++){
        ret=max(ret,dfs(graph[a][i])+(ll)1);
    }
    return ret;
}
void solve()
{   
   ll n,m,ans=0;
   cin>>n>>m;
   for(int i=1;i<=m;i++)
   {
    ll x,y;
    cin>>x>>y;
    graph[x].pb(y);
   }
   for(int i=1;i<=n;i++)
   {
    ll mx=dfs(i);
    ans=max(ans,mx);
   }
   cout<<ans<<endl;
}
*/

/*Longest path in a directed Acyclic graph (DAG)*/
/*vector<ll>graph[100005];
int dp[110000];
ll dfs(ll a)
{
    if(dp[a]!=-1) return dp[a];
    ll ret=0;
    for(ll i=0;i<graph[a].size();i++){
        ret=max(ret,dfs(graph[a][i])+(ll)1);
    }
    return dp[a]=ret;
}
void solve()
{   
   ll n,m,ans=0;
   cin>>n>>m;
   mem(dp,-1);
   for(int i=1;i<=m;i++)
   {
    ll x,y;
    cin>>x>>y;
    graph[x].pb(y);
   }
   for(int i=1;i<=n;i++)
   {
    ans=max(ans,dfs(i));
   }
   cout<<ans<<endl;
}*/
ll n,m;
vector<string>grid;
ll dp[1005][1005];// step 01
ll f(ll i,ll j)
{
    if(grid[i][j]=='#'){return 0;}
    if(i==n-1 && j==m-1)return 1;
    if(dp[i][j]!=-1){return dp[i][j];}
    ll ans=0;
    if(i+1<n){ans+=f(i+1,j);}
    if(j+1<m){ans+=f(i,j+1);}
    return dp[i][j]=ans%mod;
}
void solve()
{
    mem(dp,-1);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        grid.pb(s);
    }
    cout<<f(0,0)<<endl;
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




