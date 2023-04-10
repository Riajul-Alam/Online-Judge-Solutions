
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
	  string s;
	  cin>>s;
	  for(int i=0;i<s.size();i++)
	  {
	  	if(s[i]=='.'){
	  		x=(s[i+1]-'0');
	  		break;
	  	}
	  }
	  	for(int i=0;i<s.size();i++)
	  	{
	  		if(s[i]=='.'){break;}
	  		cout<<s[i];
	  	}	  
	  if(x>=0 && x<=2)
	  {
	  	cout<<'-'<<endl;
	  }
	  else if(x>=3 && x<=6)
	  {
	  	continue;
	  }
	  else{
	  	cout<<'+'<<endl;
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