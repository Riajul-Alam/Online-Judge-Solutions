//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define ff first
#define ss second
 
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    vector<ll>a(n);
    map<ll,ll>mp;
    x=n/2;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      mp[a[i]]++;
    }
    sort(all(a));
    vector<pair<ll,ll>>pr;
    for(int i=0;i<n;i++)
    {
     if(pr.size()==x)break;
     for(int j=i+1;j<n;j++)
     {
      if(mp.count(a[j]%a[i])==0)
      {
       pr.pb({a[j],a[i]});
       if(pr.size()==x){
        break;
       }
      }
 
 
 
 
      
     }
     if(pr.size()==x){
       break;
      }     
    }
    for(int i=0;i<pr.size();i++)
    {
     cout<<pr[i].ff<<" "<<pr[i].ss<<endl;
    }
    return;
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