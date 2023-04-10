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
#define debug cout<<"OK"<<endl;
int main()
{
    fast;
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; // string s;
      ll a[100005];
   vector<pair<ll,ll>>v;
   for(int i=0;i<n;i++)
   {
     cin>>x>>y;
     v.push_back(make_pair(x,y));
   }
   sort(v.begin(),v.end());
   for(int i=0;i<n-1;i++){
    if(v[i].ff<v[i+1].ff && v[i].ss>v[i+1].ss){
     c1++;break;
    }
   }
   if(c1){cout<<"Happy Alex"<<endl;}
   else{cout<<"Poor Alex"<<endl;}
 
 }
}