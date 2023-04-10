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
#define eps 1e-10
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;

struct A{
	ll index,p;
	string s;
};

bool cmp(A x,A y)
{
    if(x.s>y.s) return false;
    else if(x.s==y.s){
    	if(x.p>y.p) return true;
    	else return false;
    }
    else return true;
}


int main()
{
    fast;
	int t=1;
	//cin>>t;
	while(t--)
	{
	  ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
	  cin>>n; 
      vector<A>a(n);
      ll i=0;
      for(auto &x :a)
      {
      	cin>>x.s>>x.p;
      	x.index=++i;
      }
      sort(a.begin(),a.end(),cmp);

      for(auto x:a){
      	//cout<<x.s<<" "<<x.p<<endl;
      	cout<<x.index<<endl;
      }

	}
}
