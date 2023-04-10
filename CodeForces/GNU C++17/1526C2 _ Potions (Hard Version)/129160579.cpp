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
template <class T> void print(vector<T>v){for (T i : v) {cout<<i<<" ";}cout<<endl;}
const ll mod = 1e9 + 7;
/*void solve()
{   
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n;
   //ll a[n+5];
   vector<ll>a(n);
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   priority_queue<ll,vector<ll>,greater<ll>>pq;
   for(int i=0;i<n;i++)
   {
    sum+=a[i];
    ans++;
    pq.push(a[i]);
    if(sum<0)
    {
     ans--;
     sum-=pq.top();
     pq.pop();
    }
   }
   cout<<ans<<endl;
 
 }
}
*/
void solve()
{   
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n;
   //ll a[n+5];
   vector<ll>a(n);
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   multiset<ll>ms;
   for(int i=0;i<n;i++)
   {
    sum+=a[i];
    ans++;
    ms.insert(a[i]);
    if(sum<0)
    {
     ans--;
     sum-=*ms.begin();
     ms.erase(ms.begin());
    }
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