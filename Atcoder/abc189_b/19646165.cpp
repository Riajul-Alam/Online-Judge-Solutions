#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
 
        ll j,z=0,count=0,sum=0;
        ll n,m;
        cin>>n>>m;
        m=m*100;
        
        vector<pair<ll,ll> >v;
        for(ll i=1;i<=n;i++)
        {
            ll x,y;
            cin>>x>>y;
          
            v.pb(mp(x,y));
        }
        for(ll i=0;i<v.size();i++)
        {
            ll ans=(v[i].ff*v[i].ss);

            sum+=ans;
            if(sum>m)
            {
                cout<< i+1 <<endl;
                return 0;
            }
        }
        cout<< -1 <<endl;
      
    


    return 0;
}