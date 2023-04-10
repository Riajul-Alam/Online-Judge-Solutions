
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
/*void solve()
{   
	int t=1;
	//cin>>t;
	while(t--)
	{
	  ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=1;
	  cin>>n;
	  while(2*ans<=n){
	  	ans*=2;c1++;
	  }
	  if(c1==0){cout<<"0"<<endl;}
	  else{
	  	cout<<c1<<endl;
	  }

	}
}*/
set<string>st;
void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
        st.insert(a);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l+1, r);
            swap(a[l], a[i]);
        }
    }
}
void solve()
{
	string s;
	cin>>s;
	ll n,m,c1=0;
	cin>>m;
	permute(s,0,s.size()-1);
	for(auto q:st){
		c1++;
		if(c1==m){
			cout<<q<<endl;break;
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