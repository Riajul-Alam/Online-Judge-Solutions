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
ll a[2*100005];
string s;
bool Check(ll m)
{
 ll n=s.size();
    map<ll,ll>mp;
    for(int i=0;i<m-1;i++)
    {
     mp[a[i]]++;
    }
    ll start=0;
    for(int i=m-1;i<n;i++)
    {
     mp[a[i]]++;
     if(mp[1]>0 && mp[2]>0 && mp[3]>0)
     {
      return true;
     }
     mp[a[start]]--;
     start++;
    }
    return false;
 
}
int main()
{
    fast;
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,s1=0,s2=0,sum=0,c1=0,c2=0,ans=10000000;
   cin>>s;
   n=s.size();
   a[n+4]={};
   for(int i=0;i<n;i++)
   {
    a[i]=s[i]-'0';
   }
   ll left=3,right=n;
     while(left<=right)
     {
      ll mid=(left+right)/2;
      if(Check(mid))
      {
       ans=min(ans,mid),right=mid-1;
      }
      else
      {
       left=mid+1;
      }
     }
     if(ans==10000000){ans=0;}
     cout<<ans<<endl;
 }
 
}