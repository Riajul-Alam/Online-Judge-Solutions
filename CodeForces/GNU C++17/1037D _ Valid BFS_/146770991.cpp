//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long int ll;
#define Mx 
set<int>g[200005];
vector<int>a(200005);
int n,m;
void solve()
{
    int x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>x>>y;
        g[x].insert(y);
        g[y].insert(x);
    }
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    vector<ll>b;
    int vis[n+5]={};
    queue<ll>q;
    q.push(1);
    b.push_back(1);
    int ind=1;
    vis[1]=1;
    if(a[0]!=1){
         cout<<"No"<<endl;return;
    }
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(auto tm:g[u])
        {
            x=a[ind];
            if(!vis[tm]){
            vis[tm]=1;
            if(g[u].find(x)==g[u].end()){
                 cout<<"No"<<endl;return;
            }
            q.push(x);
            ind++;
            }
        }
    }
    cout<<"Yes"<<endl;
 
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast;
  // ll t;cin>>t;while(t--) 
   solve();             
}