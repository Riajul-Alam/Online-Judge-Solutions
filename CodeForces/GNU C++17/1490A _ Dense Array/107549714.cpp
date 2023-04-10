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
      ll a[100005];
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   for(int i=0;i<n-1;i++)
   {
    ll mx=max(a[i],a[i+1]);
    ll mn=min(a[i],a[i+1]);
    if(mn*2<mx){
     while(mn*2<mx)
     {
      c1++;
      mn*=2;
     }
    }
   }
   cout<<c1<<endl;
 
 }
}