//Bismillahir Rahmanir Raheem
//#include<bits/stdc++.h>
#include<iostream>
#include<numeric>
#include<tuple>
#include<bitset>
#include<iomanip>
#include<stdlib.h>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<math.h>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<sstream>
#include<string.h>
#include<deque>
#include<set>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mkp make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define  mem(a,b)   memset(a,b,sizeof(a))
#define debug(x) cout<<#x<<" "<<x<<endl;
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
#define mx 131172
ll a[mx];
ll tree[mx * 3],n;
void build(int node, int b, int e,ll x)
{
    if (b == e) {
        tree[node] = a[b];
        return;
    }
    int mid = (b + e) / 2;
    build(node*2, b, mid,x-1);
    build(node*2+1,mid + 1, e,x-1);
    if(x&1)
    {
    tree[node] = tree[node*2] | tree[node*2+1]; 
    }
    else{tree[node] = tree[node*2] ^ tree[node*2+1];}
}
 
void update(int node, int b, int e, int i, int newvalue,ll x)
{
    if (i > e || i < b)return; 
    if (b >= i && e <= i) { 
        tree[node] = newvalue;return;
    }
    int mid = (b + e) / 2;
    update(node*2, b, mid, i, newvalue,x-1);
    update(node*2+1, mid + 1, e, i, newvalue,x-1);
    if(x&1)
    {
    tree[node] = tree[node*2] | tree[node*2+1]; 
    }
    else{tree[node] = tree[node*2] ^ tree[node*2+1];}
}
void solve()
{   
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>m; 
     z=n;
     n=pow(2,n);
   vector<ll>v,v1;
   for(int i=1;i<=n;i++)
   {
     cin>>a[i];
   }
   build(1, 1, n,z);
   while(m--)
   {
    cin>>x>>y;
     update(1, 1, n, x, y,z);
     cout<<tree[1]<<endl;
   }
 }
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