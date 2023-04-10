//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld; 
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    if(n>m)swap(n,m);
    if(n==1 && m==1){
     cout<<0<<endl;return;
    }
    if(n==1 && abs(n-m)>=2){
     cout<<-1<<endl;return;
    }
    ans=(n-1)*2;
    ans+=(((m-n)*2)-1);
    if(n%2==0 && m%2==0){
     ans++;
    }
    else if(n%2 && m%2)ans++;
    cout<<ans<<endl;
 
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast;
   ll t;cin>>t;while(t--) 
   solve();          
}