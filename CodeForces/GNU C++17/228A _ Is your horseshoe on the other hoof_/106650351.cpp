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
    ll n,m;
    map<ll,ll>mp;
    set<ll>s;
    for(int i=0;i<4;i++)
    {
     ll x;cin>>x;
     mp[x]++;
     s.insert(x);
    }
    ll ans=0;
    for(auto st:s)
    {
     if(mp[st]>1)
     {
      ans+=mp[st]-1;
     }
    }
    cout<<ans<<endl;
}