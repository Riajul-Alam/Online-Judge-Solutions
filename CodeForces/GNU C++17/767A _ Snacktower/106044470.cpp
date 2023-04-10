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
    fast;
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,s1=0,s2=0,sum=0,c1=0,c2=0,ans=0;
   cin>>n;
      ll a[100005];
   vector<ll>v,v1;
   for(int i=0;i<n;i++)
   {
     cin>>x;
     v.push_back(x);
   }
   v1=v;
   sort(all(v1));
   ll j=n-1;
   map<ll,ll>mp;
   for(int i=0;i<n;i++)
   {
    mp[v[i]]++;
    if(v[i]==v1[j])
    {
           cout<<v[i]<<" ";
           ll temp=i;temp--;
           j--;
           while(j>=0)
           {
            if(mp[v1[j]]>0)
            {
             cout<<v1[j]<<" ";j--;
            }
            else{break;}
           }
           cout<<endl;
    }
    else
    {
     cout<<endl;
    }
   }
 }
}