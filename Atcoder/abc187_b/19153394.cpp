#include<bits/stdc++.h>
using namespace std; 

#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"OK"<<endl;

int main()
{
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        vector<pair<ll,ll> >v;
        while(n--)
        {
            cin>>x>>y;
            v.pb(mp(x,y));
        }

        for(ll i=0;i<v.size();i++)
        {
            double k=v[i].ff;
            double k1=v[i].ss;
            for(ll j=i+1;j<v.size();j++)
            {
                double w=v[j].ff,q=v[j].ss;
                double ans=(q-k1)/(w-k);

                if(ans >= -1.0 && ans <=1.0)
                count++;
            }
        }
        
        cout<<count<<endl;

    return 0;
}