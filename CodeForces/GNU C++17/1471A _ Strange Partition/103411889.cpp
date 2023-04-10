#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug cout<<"OK"<<endl;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
 ll n,m,x,y,z,k,s1=0,s2=0,s=0,c1=0,c2=0,ans=0;
 cin>>n>>k;
    ll a[100005];
 vector<ll>v;
 for(int i=0;i<n;i++)
 {
 cin>>a[i];
 s1=s1+a[i];
 if(a[i]%k==0)
 {
  s=s+(a[i]/k);
 }
 else
 {
      s=s+(a[i]/k)+1;
 }
   }
   if((s1%k==0))
   {
    cout<<s1/k<<" ";
   }
   else
   {
    cout<<(s1/k)+1<<" ";
   }
   cout<<s<<endl;
 
 }
}