
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
	  string s,r,t;
	  vector<string>st,st2;
	  st.pb("ARC");
	  st.pb("AGC");
	  st.pb("AHC");
	  st.pb("ABC");
	  map<string,ll>mp;
	  for(int i=0;i<3;i++)
	  {
	  	cin>>s;mp[s]++;
	  }
	  for(int i=0;i<st.size();i++)
	  {
	  	if(mp[st[i]]==0){
	  		cout<<st[i]<<endl;break;
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