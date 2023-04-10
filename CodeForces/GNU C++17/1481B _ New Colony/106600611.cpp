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
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,s1=0,s2=0,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>k;
      ll a[100005];
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   ll index;
   bool f=0;
   z=k;
   for(int i=0;i<k;i++)
   {
    f=0;
    z--;
        for(int j=0;j<n-1;j++)
        {
          if(a[j]<a[j+1])
          {
           a[j]=a[j]+1;
           index=j;
           f=1;break;
          }
        }
        if(f==0){break;}
   }
   if(f==1 && z==0){cout<<index+1<<endl;}
   else{cout<<-1<<endl;}
 
 }
}