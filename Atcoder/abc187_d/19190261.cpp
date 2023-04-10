#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second 
#define debug cout<<"OK"<<endl;
int main()
{
	int t=1;
	//cin>>t;
	while(t--)
	{
		ll n,m,Count=0;
		cin>>n;
		vector<pair<ll,ll>>vp;
	    ll sum1=0,sum2=0;
	    for (int i = 0; i < n; ++i)
	    {
	    	ll x,y;
	    	cin>>x>>y;
	    	sum1=sum1+x;
	    	vp.push_back(make_pair(2*x+y,x));
	    }
	    sort(vp.rbegin(),vp.rend());
	    ll ans=0;
	    for(int i=0;i<n;i++)
	    {
	    	ans++;
            sum2=sum2+vp[i].ff-vp[i].ss;
            sum1=sum1-vp[i].ss;
            if(sum2>sum1){break;}
	    }
	    cout<<ans<<endl;

	}

}