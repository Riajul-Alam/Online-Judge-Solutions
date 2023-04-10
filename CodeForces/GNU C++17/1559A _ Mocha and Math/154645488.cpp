//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld; 
#define pb push_back
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    ans=a[0];
    for(int i=1;i<n;i++)ans=(ans & a[i]);
    cout<<ans<<endl;
 
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   ll t;cin>>t;while(t--) 
   solve();          
}