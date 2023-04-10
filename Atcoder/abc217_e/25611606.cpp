
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
	  cin>>n; 
	  vector<ll>v;
	  priority_queue<ll,vector<ll>,greater<ll> > pq;
	  
	  for(int i=1;i<=n;i++)
	  {
	  	cin>>x;
	  	if(x==1)
	  	{
	  		cin>>y;
	  		v.push_back(y);
	  	}
	  	else if(x==2)
	  	{
	  		if(c1)
	  		{
              auto it=pq.top();
              cout<<it<<endl;
              pq.pop();c1--;
	  		}
	  		else
	  		{
	  			auto it=v.begin();
	  			cout<<v[0]<<endl;
	  			v.erase(it);
	  		}
	  	}
	  	else
	  	{
	  		for(int i=0;i<v.size();i++)
	  		{
	  			pq.push(v[i]);
	  		}
	  		c1=pq.size();
	  		v.clear();
	  	}

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