//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
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
    while(!q.empty())
    {
     ll u=q.front();
     q.pop();
     y=g[u].size();
     set<int>bf,af;
     for(auto tm:g[u])
     {
      if(!vis[tm]){
      vis[tm]=1;
      x=a[ind];
      bf.insert(x);
      af.insert(tm);
      q.push(x);
      ind++;
      }
     }
     debug(af);
     debug(bf)
     if(bf!=af){
       cout<<"NO"<<endl;return;
     }
    }
    /*for(int i=0;i<n;i++){
     if(a[i]!=b[i]){
       cout<<"No"<<endl;return ;
     }
    }*/
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