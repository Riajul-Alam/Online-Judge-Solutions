//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld; 
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vvl vector<vl>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define f0(b) for(int i=0;i<(b);i++)
#define f00(b) for(int j=0;j<(b);j++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define N 10005
// https://atcoder.jp/contests/abc271/tasks/abc271_d

ll n,m;
vector<pll>item(105);
vvl dp;
ll f(ll i,ll sum,string s){
  if(sum==m && i==n){
    cout<<"Yes"<<endl;
    cout<<s<<endl;exit(0);
  }
  else if(sum>m || i>=n){
    return 0;
  }
  if(dp[i][sum]!=-1){
    return dp[i][sum];
  }
  ll x=0,y=0;
  x=f(i+1,sum+item[i].ff,s+'H');
  y=f(i+1,sum+item[i].ss,s+'T');
  return dp[i][sum]=(x||y);
}

void solve()
{
    ll i,j,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
      cin>>item[i].ff>>item[i].ss;
    }
    dp.resize(n+5,vector<ll>(m+5,-1));
    if(f(0,0,"")!=1){
       cout<<"No"<<endl;
    }
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
