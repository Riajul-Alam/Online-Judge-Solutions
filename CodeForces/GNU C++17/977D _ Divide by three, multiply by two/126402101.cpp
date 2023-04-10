 
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
void solve()
{   
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; 
   unordered_set<ll> myset;
   vector<ll>v(n+5);
   for(int i=0;i<n;i++)
   {
     cin>>v[i];
     myset.insert(v[i]);
   }
   ll last;
   for(int i=0;i<n;i++)
   {
    if(myset.find(v[i]*2)!=myset.end()){
     continue;
    }
    if(v[i]%3==0 && myset.find(v[i]/3)!=myset.end())
    {
     continue;
    }
    last=v[i];break;
   }
   stack<ll>myst;
   myst.push(last);
   while(myst.size()!=n)
   {
    ll val=myst.top();
    if(myset.find(val*3)!=myset.end()){
     myst.push(val*3);
    }
    else {
     myst.push(val/2);
    }
   }
   while(!myst.empty())
   {
    cout<<myst.top()<<" ";
    myst.pop();
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