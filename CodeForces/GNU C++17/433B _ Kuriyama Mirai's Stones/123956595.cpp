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
int main()
{
    fast;
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; 
   vector<ll>v1,v2;
   for(int i=0;i<n;i++)
   {
     cin>>x;
     v1.pb(x);
   }
     v2=v1;
     sort(all(v2));
     ll pre1[100005],pre2[100005];
     pre1[0]=v1[0],pre2[0]=v2[0];
     for(int i=1;i<n;i++)
     {
        pre1[i]=pre1[i-1]+v1[i];
        pre2[i]=pre2[i-1]+v2[i];
     }
     // for(int i=0;i<n;i++)
     // {
     //  cout<<pre1[i]<<" "<<pre2[i]<<endl;
     // }
     cin>>m;
     while(m--)
     {
      cin>>x>>y>>z;
      if(x==1)
      {
          sum=pre1[z-1];
          if(y-2>=0)
          {
           sum=sum-pre1[y-2];
          } 
      }
      else{
          sum=pre2[z-1];
          if(y-2>=0)
          {
           sum=sum-pre2[y-2];
          }       
      }
      cout<<sum<<endl;
     }
 
 }
}