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
typedef unsigned long long ull;
typedef long double lld;
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define SZ(cont) (int)(cont).size()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define  mem(a,b)   memset(a,b,sizeof(a))
#define dbg(x) cout<<#x<<" "<<x<<endl;
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
const ll N=100005;
void solve()
{   
 int t=1;
 cin>>t;
 vector<ll>pre;
 pre.pb(0);
 pre.pb(1);
 for(ll i=2;i<=N;i++)
 {
  pre.pb(pre[i-1]+i);
 }
 while(t--)
 {
   int n,m,x,y,z,k,sum=0,c1=1,c2=0,p1=0,p2=0;
   cin>>n>>m;
   ll lo=lower_bound(all(pre),m)-pre.begin();
   //dbg(lo);
   string s="";
   for(int i=0;i<=lo;i++){
    s+='a';
   }
   s[0]='b';
   x=(pre[lo]-m)+1;
   s[x]='b';
   for(int i=lo+1;i<n;i++){
    cout<<'a';
   }
   cout<<s<<endl;
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