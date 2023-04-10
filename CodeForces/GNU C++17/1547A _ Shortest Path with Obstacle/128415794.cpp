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
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   ll a[4];
   ll b[4];
   ll c[4];
   for(int i=0;i<2;i++){
    cin>>a[i];
   }
   for(int i=0;i<2;i++)
   {
    cin>>b[i];
   }
   for(int i=0;i<2;i++)
   {
    cin>>c[i];
   }
 
   if(a[0]>b[0]){swap(a[0],b[0]);}
   if(a[1]>b[1]){swap(a[1],b[1]);}
   ans=abs(b[0]-a[0])+abs(b[1]-a[1]);
   if((b[0]==c[0] && a[0]==c[0]) && (a[1]<=c[1] && b[1]>=c[1])) // Row same and column obstacle in range
   {
      ans+=2;
   }
   else if((a[1]==c[1] && b[1]==c[1]) && (a[0]<=c[0] && b[0]>=c[0])){
      ans+=2;
   }
   cout<<ans<<endl;
 
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