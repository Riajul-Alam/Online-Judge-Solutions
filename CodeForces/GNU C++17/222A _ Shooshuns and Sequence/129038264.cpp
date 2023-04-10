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
const ll mod = 1e9 + 7;
void solve()
{   
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>m;
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
     cin>>x;v.pb(x);
   }
   ll sameStart=n;
   for(int i=n-1;i>=0;i--)
   {
    if(v[i]!=v[sameStart-1])
    {
     sameStart=i+2;c1++;break;
    }
    c2++;
   }
   //dbg(sameStart);
   if(c1==0){sameStart=1;}
   if(m<sameStart)
   {
    cout<<-1<<endl;
   }
   else{
    cout<<n- c2<<endl;
   }
 
/*   for(int i=0;i<n;i++)
   {
    auto p=v.begin();
    x=v[m-1];
    v.erase(p);
    v.pb(x);
   }
   set<ll>st;
   for(int i=0;i<n;i++){
    st.insert(v[i]);
   }
   if(st.size()==1)
   {
 
   }*/
 
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