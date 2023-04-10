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
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; 
      ll a[n+5];
   vector<ll>v;
   for(int i=1;i<=n;i++)
   {
     cin>>a[i];
   }
      ll ok=-1;
   for(int i=1;i<n;i++)
   {
    if(a[i]==0 && a[i+1]==1){
     ok=i;
            break;
    }
   }
      if(a[1]==1)
      {
       cout<<n+1<<" ";
       for(int i=1;i<=n;i++){cout<<i<<" ";}
        cout<<endl;
        continue;
      }
    if(a[n]==0)
    {
     for(int i=1;i<=n+1;i++)
     {
      cout<<i<<" ";
     }cout<<endl;continue;
    }
 
    if(ok==-1){cout<<-1<<endl;}
    else
    {
     for(int i=1;i<=ok;i++)
     {
          cout<<i<<" ";
     }
     cout<<n+1<<" ";
     for(int i=ok+1;i<=n;i++)
     {
      cout<<i<<" ";
     }
     cout<<endl;
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