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
	  ll n,m,x,y,z,k,s1=0,s2=0,sum=0,c1=0,c2=0,ans=0,s,d;
	  cin>>n>>s>>d;
	  vector<pair<ll,ll>>v;
	  for(int i=0;i<n;i++)
	  {
	    cin>>x>>y;
	    v.push_back(make_pair(x,y));
	  }
	  for(auto p:v)
	  {
        if(p.ff>=s || p.ss<=d)
        {
        	continue;
        }
        else
        {
        	c1++;break;
        }
	  }
	  if(c1==0){cout<<"No"<<endl;}
	  else{cout<<"Yes"<<endl;}

	}
}