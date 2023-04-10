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
   cin>>n; 
      ll a[2*100005];
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
     sum+=a[i];
   }
   if(sum%n!=0){cout<<-1<<endl;continue;}
 
   x=(sum/n);
   for(int i=0;i<n;i++){
    if(a[i]>x){
     ans++;
    }
   }
   cout<<ans<<endl;
 
 }
}