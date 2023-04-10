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
   ll n,m,x,y,z,k,s1=0,s2=0,s=0,c1=0,c2=0,ans=0;
   cin>>n;
      ll a[100005];
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
   ll mx=0,mn=10e18;    
        if(i>0)
        {
     if(a[i]<0 && a[i-1]<0)
     {
      ll temp=abs((a[i]*(-1))-(a[i-1]*(-1)));
      mn=min(temp,mn);
      //mx=max(mx,temp);
     }
     else if(a[i]<0 && a[i-1]>=0)
     {
       ll temp=(a[i]*(-1))+a[i-1];
       mn=min(mn,temp);
       //mx=max(mx,temp);
     }
     else if(a[i]>=0 && a[i-1]<0)
     {
       ll temp=(a[i-1]*(-1))+a[i];
       mn=min(mn,temp);
       mx=max(mx,temp);
     }
     else if(a[i]>=0 && a[i-1]>=0)
     {
      ll temp=abs((a[i]*(-1))-(a[i-1]*(-1)));
      mn=min(temp,mn);
      //mx=max(mx,temp);      
     }
        }
         if(i<n-1)
        {
     if(a[i]<0 && a[i+1]<0)
     {
      ll temp=abs((a[i]*(-1))-(a[i+1]*(-1)));
      mn=min(temp,mn);
      //mx=max(mx,temp);
     }
     else if(a[i]<0 && a[i+1]>=0)
     {
       ll temp=(a[i]*(-1))+a[i+1];
       mn=min(mn,temp);
       //mx=max(mx,temp);
     }
     else if(a[i]>=0 && a[i+1]<0)
     {
       ll temp=(a[i+1]*(-1))+a[i];
       mn=min(mn,temp);
       mx=max(mx,temp);
     }
     else if(a[i]>=0 && a[i+1]>=0)
     {
      ll temp=abs((a[i]*(-1))-(a[i+1]*(-1)));
      mn=min(temp,mn);
      //mx=max(mx,temp);      
     }
        }
 
        if(i>0)
        {
     if(a[i]<0 && a[0]<0)
     {
      ll temp=abs((a[i]*(-1))-(a[0]*(-1)));
      mx=max(mx,temp);
     }
     else if(a[i]<0 && a[0]>=0)
     {
       ll temp=(a[i]*(-1))+a[0];
       mx=max(mx,temp);
     }
     else if(a[i]>=0 && a[0]<0)
     {
       ll temp=(a[0]*(-1))+a[i];
       mx=max(mx,temp);
     }
     else if(a[i]>=0 && a[0]>=0)
     {
      ll temp=abs((a[i]*(-1))-(a[0]*(-1)));
      mx=max(mx,temp);      
     }  
        }
        if(i<n-1)
        {
     if(a[i]<0 && a[n-1]<0)
     {
      ll temp=abs((a[i]*(-1))-(a[n-1]*(-1)));
      mx=max(mx,temp);
     }
     else if(a[i]<0 && a[n-1]>=0)
     {
       ll temp=(a[i]*(-1))+a[n-1];
       mx=max(mx,temp);
     }
     else if(a[i]>=0 && a[n-1]<0)
     {
       ll temp=(a[n-1]*(-1))+a[i];
       mx=max(mx,temp);
     }
     else if(a[i]>=0 && a[n-1]>=0)
     {
      ll temp=abs((a[i]*(-1))-(a[n-1]*(-1)));
      mx=max(mx,temp);      
     }         
        }
    cout<<mn<<" "<<mx<<endl;    
 }
    
 }
}