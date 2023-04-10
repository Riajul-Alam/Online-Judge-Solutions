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
#define N 100005
ll mul(ll a, ll b)
{
 return (a* b) % mod;
}
 
ll addmod(ll a, ll b)
{
 a += b;
 if(a >= mod)
 {
   (a -= mod);
 }
 return a;
}
 
 
string s;
int n;
ll tens[N],sumTens[N],pref[N],prefSum[N],suff[N],suffSum[N];
 
int main()
{
 
    fast;
 int t=1;
 //cin>>t;
 while(t--)
 {
   cin>>s;
   n=s.size();
      if(n==1){
       cout<<0<<endl;
       continue;
      }
      if(n==2){
       cout<<(s[0]-'0')+(s[1]-'0')<<endl;
      }
 
      tens[0]=1,sumTens[0]=0;
      for(int i=1;i<N;i++){
       tens[i]=mul(tens[i-1],10);
       sumTens[i]=addmod(sumTens[i-1],tens[i]);
      }
      pref[0]=(s[0]-'0'),suff[n-1]=(s[n-1]-'0');
      prefSum[0]=pref[0],suffSum[n-1]=suff[n-1];
 
      for(int i=1;i<n;i++){
       pref[i]=addmod(mul(pref[i-1],10),(s[i]-'0'));
       prefSum[i]=addmod(prefSum[i-1],pref[i]);
      }
 
      ll p=10;
      for(int i=n-2;i>=0;i--){
       suff[i]=addmod(mul((s[i]-'0'),p),(suff[i+1]));
       suffSum[i]=addmod(suffSum[i+1],suff[i]); 
       p=mul(p,10);     
      }
 
 
      ll ans=0;
      ans=addmod(ans,suffSum[1]);
      ans=addmod(ans,prefSum[n-2]);
      for(int i=1;i<n-1;i++){
       ll temp=mul(pref[i-1],sumTens[n-i-1]);
       temp=addmod(temp,suffSum[i+1]);
       ans=addmod(ans,temp);
      }
      cout<<ans<<endl;
 
 
 }
}