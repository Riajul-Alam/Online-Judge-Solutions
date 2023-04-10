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
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=1;
   cin>>n; 
      ll a[50005][5];
   vector<ll>v;
   map<ll,ll>mp;
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<5;j++)
     {
      cin>>a[i][j];
     }
   }
    
    ll i=0;
   for(int j=1;j<n;j++)
   {
    c1=0;
    if(a[j][0]<a[i][0]){c1++;}
    if(a[j][1]<a[i][1]){c1++;}
    if(a[j][2]<a[i][2]){c1++;}
    if(a[j][3]<a[i][3]){c1++;}
    if(a[j][4]<a[i][4]){c1++;}
        if(c1>=3){i=j;}
   }
 
      if(n!=1 && i!=0)
   {
       c1=0;
    if(a[0][0]>a[i][0]){c1++;}
    if(a[0][1]>a[i][1]){c1++;}
    if(a[0][2]>a[i][2]){c1++;}
    if(a[0][3]>a[i][3]){c1++;}
    if(a[0][4]>a[i][4]){c1++;} 
    if(c1<3){i=0;c2++;}
   }
     
     for(int j=0;j<n;j++)
     {
      if(i==j){continue;}
      c1=0;
    if(a[j][0]>a[i][0]){c1++;}
    if(a[j][1]>a[i][1]){c1++;}
    if(a[j][2]>a[i][2]){c1++;}
    if(a[j][3]>a[i][3]){c1++;}
    if(a[j][4]>a[i][4]){c1++;}
        if(c1>=3){ans=i+1;}
        else{ans=-1;break;}
     }
 
     cout<<ans<<endl;
   }
}