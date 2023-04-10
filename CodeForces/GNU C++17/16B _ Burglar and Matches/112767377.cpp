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
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug cout<<"OK"<<endl;
int main()
{
    fast;
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>m; // string s;
      ll a[100005];
   vector<pair<ll,ll>>vp;
   for(int i=0;i<m;i++)
   {
    cin>>x>>y;
     vp.push_back({y,x});
   }
   sort(vp.begin(),vp.end(),greater<pair<ll,ll>>());
   for(int i=0;i<m;i++){
    if(c1+vp[i].ss<=n){
          sum+=(vp[i].ff*vp[i].ss);
          c1+=vp[i].ss;
    }
    else if(c1+vp[i].ss>n){
     ll lagbe=(n-c1);
     sum+=(vp[i].ff*lagbe);
     c1+=lagbe;
     break;
    }
   }
   cout<<sum<<endl;
 
 }
}