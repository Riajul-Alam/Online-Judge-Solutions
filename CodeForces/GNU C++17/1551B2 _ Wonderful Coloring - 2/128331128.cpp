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
void solve()
{   
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0;
   cin>>n>>k; 
      ll a[n+5];
   map<ll,ll>mp;
   vector<ll>v[n+5];
   for(ll i=0;i<n;i++)
   {
     cin>>a[i];mp[a[i]]++;
     v[a[i]].pb(i);
   }
     int ans[n+3]={0};
     vector<pair<ll,ll>>v1;
     for(auto q:mp)
     {
      x=q.ff;
      y=q.ss;
      if(q.ss>=k)
      {
       for(ll i=0;i<k;i++)
       {
        ans[v[x][i]]=i+1;
       }
      }
      else{
       for(ll i=0;i<v[x].size();i++)
       {
        v1.pb({x,v[x][i]});
       }
      }
     }
     z=v1.size();
     x=z%k;
     c1=1;
     for(int i=0;i<z-x;i++)
     {
        ans[v1[i].ss]=c1;c1++;
        if(c1>k){c1=1;}
     }
     for(int i=0;i<n;i++)
     {
      cout<<ans[i]<<" ";
     }
     cout<<endl;
 
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