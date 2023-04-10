
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
	//cin>>t;
	while(t--)
	{
	  ll n,m,x,y,z,k,sum=0,c1=0,c2=0;
	  cin>>n>>m>>k; 
      map<pair<ll,ll>,ll>mp;
      for(ll i=0;i<k;i++)
      {
      	cin>>x>>y;
        mp[{x,y}]=i+1;
      }
      vector<pair<pair<ll,ll>,ll>>vp,vp1,vp2;
      ll i=0,j=0;
      for(auto q:mp)
      {
      	vp.pb({{q.ff.ff,q.ff.ss},q.ss});
      	//swap(vp[i-1].ff.ff,vp[i-1].ff.ss);
      }
      sort(all(vp));
      i=0;
      for(auto q:vp)
      {
      	if(vp1.size()==0)i++;
      	else if(vp[j-1].ff.ff!=vp[j].ff.ff){i++;}
      	vp1.pb({{i,q.ff.ss},q.ss});
      	swap(vp1[j].ff.ff,vp1[j].ff.ss);j++;
      }
      sort(all(vp1));
      i=0,j=0;
      for(auto q:vp1)
      {
      	if(vp2.size()==0)i++;
      	else if(vp1[j].ff.ff!=vp1[j-1].ff.ff){i++;}
      	vp2.pb({{i,q.ff.ss},q.ss});
      	swap(vp2[j].ff.ff,vp2[j].ff.ss);j++;
      }

      vector<pair<ll,pair<ll,ll>>>ans;
      for(auto q:vp2)
      {
       x=q.ss;
       y=q.ff.ff;
       z=q.ff.ss;
       ans.pb({x,{y,z}});
      }
      sort(all(ans));
      for(auto q:ans)
      {
      	cout<<q.ss.ff<<" "<<q.ss.ss<<endl;
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