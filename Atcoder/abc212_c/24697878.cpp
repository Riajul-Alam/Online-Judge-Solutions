
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
	  ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
	  cin>>n>>m; 
	  vector<ll>v1(n),v2(m);
	  for(int i=0;i<n;i++)
	  {
	    cin>>v1[i];
	  }
	  for(int i=0;i<m;i++)
	  {
	  	cin>>v2[i];
	  }
	  sort(all(v1));
	  sort(all(v2));
	  ll mn=INF;
	  for(int i=0;i<n;i++)
	  {
	   auto itt=lower_bound(v2.begin(),v2.end(),v1[i])-v2.begin();
       	if(itt-1>=0)
       	{
       		x=abs(v2[itt-1]-v1[i]);
       		mn=min(mn,x);//debug(x);
       	}
       	if(itt+1<m){
       		x=abs(v2[itt+1]-v1[i]);
       		mn=min(mn,x);       	//debug(x);	
       	}
       	x=abs(v2[itt]-v1[i]);
       	mn=min(x,mn);//debug(v1[i]);
	  }
	  cout<<mn<<endl;
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
