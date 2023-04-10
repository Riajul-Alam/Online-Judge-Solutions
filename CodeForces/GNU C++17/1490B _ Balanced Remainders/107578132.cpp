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
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
int main()
{
    fast;
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; // string s;cin>>s;
      ll a[3*10004];
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   ll c[3*10004];
   map<ll,ll>mp;
   for(int i=0;i<n;i++)
   {
    c[i]=a[i]%3;
    mp[c[i]]++;
   }
   ll b[10];
   b[0]=0,b[1]=1,b[2]=2;
   for(int i=1;i<=(n/3);i++)
   {
    ll Count=0,j=0;
    while(Count<3)
    {
     if(mp[b[j]]){
      mp[b[j]]--;
      j++;
      Count++;
     }
     else if(b[j]==0)
     {
             if(mp[b[2]])
             {
              ans+=1;
              mp[b[2]]--;j++;Count++;
             } 
             else if(mp[b[1]])
             {
              ans+=2;
              mp[b[1]]--;j++;Count++;
             }
     }
     else if(b[j]==1)
     {
                if(mp[b[0]])
                {
                 ans+=1;
                 mp[b[0]]--;j++;Count++;
                }
                else if(mp[b[2]])
                {
                 ans+=2;
                 mp[b[2]]--;j++;Count++;
                }
     }
     else if(b[j]==2)
     {
      if(mp[b[1]]){
       ans+=1;
       mp[b[1]]--;j++;Count++;
      }else if(mp[b[0]])
      {
       ans+=2;
       mp[b[0]]--;j++;Count++;
      }
     }
    }
   }
   cout<<ans<<endl;
       
   
 
 }
}