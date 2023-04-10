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
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=1;
   cin>>n>>k; 
   vector<ll>a,v;
   for(int i=0;i<n;i++) 
   {
     cin>>x;a.pb(x);
     v.pb(x);
   }
   sort(all(v)); //  4  3 5
   for(int i=0;i<n-1;i++)
   {
    if(a[i]>a[i+1]){
     /*auto it=upper_bound(v.begin(),v.end(),a[i+1])-v.begin();*/
         ans++;
    }
    else{
    auto it=upper_bound(v.begin(),v.end(),a[i])-v.begin();
    if(v[it]!=a[i+1] && it<n){
         ans++;
    } 
    } 
   }
 // cout<<ans<<endl;
   if(ans<=k){
    cout<<"YES"<<endl;
   }
   else{
     cout<<"NO"<<endl;
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