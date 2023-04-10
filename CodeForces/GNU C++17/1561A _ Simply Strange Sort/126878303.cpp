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
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,c3=0,ans=0;
   cin>>n; 
      ll a[n+5];
   vector<ll>v(n);
   for(int i=0;i<n;i++)
   {
     cin>>a[i];v[i]=a[i];
   }
   while(1)
   {  
    c3=0;
    for(int i=0;i<n-1;i++)
    {
     if(a[i]>a[i+1]){c3++;}
    }
    if(c3==0){break;}    
    if(ans%2==0){
     c1=0;
    for(int i=0;i<n-2;i+=2)
    {
     if(a[i]>a[i+1])
     {
      c1++;
      swap(a[i],a[i+1]);
     }
    }
   }
   else{
    c2=0;
    for(int i=1;i<n-1;i+=2)
    {
     if(a[i]>a[i+1])
     {
      c2++;
      swap(a[i],a[i+1]);
     }
    }    
   }
   ans++;
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