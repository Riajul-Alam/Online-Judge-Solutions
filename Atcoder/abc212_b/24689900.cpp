
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
	  map<ll,ll>mp;
      x=s[0]-'0';
      y=s[1]-'0';
      z=s[2]-'0';
      m=s[3]-'0';
      mp[x]++;
      mp[y]++;
      mp[z]++;
      mp[m]++;
      
	  if(x+1==y){
	  	c1++;
	  }
	  if(x==9 && y==0){
	  	c1++;
	  }
      if(y+1==z){
	  	c1++;
	  }
	  if(y==9 && z==0){
	  	c1++;
	  }
	  if(z+1==m){
	  	c1++;
	  }
      if(z==9 && m==0){
      	c1++;
      }




	  if(mp.size()==1){c2++;}
	    

	   if(c1==3){
	  		 cout<<"Weak"<<endl;
	  	}
	  	else if(c2)
	  	{
	  	cout<<"Weak"<<endl;	
	  	}
	  	else{
	  		cout<<"Strong"<<endl;
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