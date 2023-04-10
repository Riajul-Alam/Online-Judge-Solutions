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
const ll mod = 1e9 + 7;
int main()
{
    fast;
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,c3=0,ans=0;
   cin>>n; 
      ll a[100005];
   vector<ll>v;
   ll mx=0,mn=2000000;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
     mx=max(mx,a[i]);
     mn=min(mn,a[i]);
   }
   x=0;
      for(int i=0;i<n;i++){
        if(x==2){break;}
        if(a[i]==mx || a[i]==mn){
         x++;
        }
        c1++;
      }
      x=0;
      for(int i=n-1;i>=0;i--){
        if(x==2){break;}
        if(a[i]==mx || a[i]==mn){
         x++;
        }
        c2++;       
      }
      for(int i=0;i<n;i++){
       if(a[i]==mx || a[i]==mn){
        c3++;break;
       }
       c3++;
      }
     for(int i=n-1;i>=0;i--){
      if(a[i]==mx || a[i]==mn){
       c3++;break;
      }
      c3++;
     }
     if(c1==0){c1=89345783;}
     if(c2==0){c2=374873;}
     if(c3==0){c3=7458435;}
     cout<<min(c3,min(c1,c2))<<endl;
 }
}