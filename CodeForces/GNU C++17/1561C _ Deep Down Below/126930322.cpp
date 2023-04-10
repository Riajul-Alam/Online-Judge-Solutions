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
      //vector<vector<ll>>a;
      vector<pair<ll,vector<ll>>>mpv;
      for(int i=0;i<n;i++)
      {
       cin>>x;
       vector<ll>v;
       ll initial=0,c1=0;
       for(int i=0;i<x;i++){
        cin>>y;
        v.pb(y);
        //debug(initial);
        if(i==0){initial=v[i]+1;}
            else{
             ll need=0;
             if(v[i]>=initial+c1)
             {
                     initial=(v[i]-c1)+1;
             }
            }
            //debug(initial);
        c1++;
       }
       mpv.pb({initial,v});
      }
      sort(all(mpv));
      ll complete=mpv[0].ss.size();
      ll initial=mpv[0].ff;
      for(int i=1;i<mpv.size();i++)
      {
       c1=0;
         for(auto q:mpv[i].ss)
         {
             if(q>=initial+complete+c1)
             {
                     ll now=(q-(initial+complete+c1))+1;
     initial+=now;                     
             }
             c1++;
         }
        // debug(complete);
         complete=complete+mpv[i].ss.size();
      }
      cout<<initial<<endl;
 
     //cout<<mpv[0].ff<<endl;
 
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