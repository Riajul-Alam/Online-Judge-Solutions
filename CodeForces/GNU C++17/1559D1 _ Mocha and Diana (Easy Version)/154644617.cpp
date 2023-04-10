//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld; 
#define pb push_back
#define ff first
#define ss second
struct DSU{
    int n;
    vector<int>par,_size;
    DSU(int N)
    {
      n=N;
      par.assign(n+1,-1);
      _size.assign(n+1,-1);
      for(int i=0;i<=n;i++)
      {
        par[i]=i;
        _size[i]=1;
      }
    }
    int FindP(int u){
      if(par[u]==u) return u;
      return par[u]=FindP(par[u]);
    }
    void Merge(int u,int v)
    {
      u=FindP(u);
      v=FindP(v);
      if(u==v)return;
        
      if(_size[v]>_size[u]) swap(u,v);
      par[v]=u;
      _size[u]+=_size[v];
    }
};
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>x>>y;
    vector<ll>a(n);
    DSU diana(n+5),mocha(n+5);
    for(int i=0;i<x;i++)
    {
     ll p,q;cin>>p>>q;
     if(diana.FindP(p)!=diana.FindP(q)){
      diana.Merge(p,q);
     }
    }
    for(int i=0;i<y;i++)
    {
     ll p,q;cin>>p>>q;
     if(mocha.FindP(p)!=mocha.FindP(q)){
      mocha.Merge(p,q);
     }
    }
    vector<pair<ll,ll>>an;
    for(int i=1;i<=n;i++)
    {
     for(int j=i+1;j<=n;j++)
     {
      if(mocha.FindP(i)!=mocha.FindP(j) && diana.FindP(i)!=diana.FindP(j))
      {
       an.pb({i,j});
       mocha.Merge(i,j);
       diana.Merge(i,j);
      }
     }
    }
    cout<<an.size()<<endl;
    for(auto Q:an){cout<<Q.ff<<" "<<Q.ss<<endl;}
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   solve();          
}