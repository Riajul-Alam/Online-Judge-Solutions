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
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
      ll a[100005];
   vector<ll>v;
   for(int i=0;i<4;i++)
   {
     cin>>a[i];
   }
   x=max(a[0],a[1]);
   y=max(a[2],a[3]);
   sort(a,a+4);
   if(a[3]==max(x,y) && a[2]==min(x,y)){
    cout<<"YES"<<endl;
   }else{
     cout<<"NO"<<endl;
   }
 
 }
}