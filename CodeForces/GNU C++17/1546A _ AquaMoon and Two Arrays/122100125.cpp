//Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
int main()
{
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; 
      ll a[1005];
      ll b[1005];
   vector<ll>v;
   ll s1=0,s2=0;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];s1+=a[i];
   }
   for(int i=0;i<n;i++)
   {
    cin>>b[i];s2+=b[i];
   }
   if(s1!=s2){ cout<<"-1"<<endl;continue;}
     vector<pair<ll,ll>>vp;
   for(int i=0;i<n;i++)
   {
          if(a[i]!=b[i])
          {
           ll j=i+1;
           if(a[i]<b[i])
           {
           while(a[i]!=b[i] && j<n)
           {
            if(a[j]>0 && a[i]<b[i])
            {
                    a[i]+=1;
                    a[j]-=1;
                    vp.push_back({j+1,i+1});
 
            }
            if(a[j]==0){j++;}
           }
          }
          else if(a[i]>b[i])
          {
           while(a[i]!=b[i])
           {
            if(a[i]>b[i] && a[j]<b[j])
            {
                    a[i]-=1;
                    a[j]+=1;
                    vp.push_back({i+1,j+1});
 
            }
            else{
             j++;
            }
           }           
          }
          }
   }
   if(vp.size()>100){ cout<<"-1"<<endl;}
   else{
    cout<<vp.size()<<endl;
    for(auto q:vp)
    {
     cout<<q.ff<<" "<<q.ss<<endl;
    }
   }
 
 }
}