//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void bfs(vector<int>&dis,int root)
{
 for(int i=0;i<10005;i++)
 {
  dis[i]=1e9;
 }
 queue<int>q;
 q.push(root);
 dis[root]=0;
 while(!q.empty())
 {
  int u=q.front();
  q.pop();
  if(dis[2*u]==1e9)
  {
   q.push(2*u);
   dis[2*u]=dis[u]+1;// dis[u]-->dis[2*u]
  }
  if(dis[u-1]==1e9)
  {
   q.push(u-1);
   dis[u-1]=dis[u]+1;// dis[u]-->dis[u-1]
  }
 }
}
void solve()
{
    int n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    vector<int>dis(100009);
    bfs(dis,n);
    cout<<dis[m]<<endl;
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   //ll t;cin>>t;while(t--) 
   solve();          
}