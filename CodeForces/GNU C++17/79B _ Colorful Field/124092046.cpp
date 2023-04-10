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
   cin>>n>>m>>x>>y;
      map<pair<ll,ll>,ll>mp;
      for(int i=0;i<x;i++)
      {
       ll tp1,tp2;
       cin>>tp1>>tp2;
       mp[{tp1-1,tp2-1}]=1;
      }
      
 
      for(int i=0;i<y;i++)
      {
       ll p,q;
       cin>>p>>q;
       if(mp[{p-1,q-1}]){
        cout<<"Waste"<<endl;
        continue;
       }
       ll temp;
       temp=((p-1)*m)+q;
       ans=0;
       for(auto az:mp)
       {
          if(az.ff.ff>p-1){
           break;
          }
          if(az.ff.ff==p-1 && az.ff.ss>q-1){
           break;
          }
          if(az.ss>0)ans++;
       }
       ans=(temp-ans);
       if(ans%3==0)
       {
          cout<<"Grapes"<<endl;
       }
       else if(ans%3==2)
       {
           cout<<"Kiwis"<<endl;
       }
       else if(ans%3==1)
       {
        cout<<"Carrots"<<endl;
       }
       
      }
 
 }
}