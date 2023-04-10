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
    ll s=0,n,m,k,c1=0,t=1;
    while(t--)
    {
      cin>>n>>k;
      vector<ll>v,v1,v2;
      for(int i=0;i<n;i++)
      {
        ll val;cin>>val;
        v.push_back(val);
        v1.push_back(val);
      }
      sort(rall(v1));
      map<ll,ll>mp;
      for(int i=0;i<k;i++)
      {
        s+=v1[i];
          mp[v1[i]]++;
      }
      
      for(int i=0;i<n;i++)
      {
        if(mp[v[i]]>=1)
        {
          c1++;
          v2.push_back(c1);
          c1=0;
          mp[v[i]]--;
        }
        else
        {
          c1++;
        }
      }
      cout<<s<<endl;
      for(int i=0;i<k;i++)
      {
        if(i==k-1)
        {
         cout<<v2[i]+c1<<" "; 
        }
        else
        {
         cout<<v2[i]<<" ";         
       }
      }
    }
}