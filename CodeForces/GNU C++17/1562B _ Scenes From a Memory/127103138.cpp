 
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
#define debug(x) cout<<#x<<" "<<x<<endl;
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
bool isPrime(ll n)
{
 if(n==1) return false;
 for(int i=2;i*i<=n;i++)
 {
  if(n%i==0){
   return false;
  }
 }
 return true;
}
void solve()
{   
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; 
      string s;
      cin>>s;
      vector<ll>pr,npr,ar;
      map<ll,ll>mp;
      for(int i=0;i<n;i++)
      {
        x=s[i]-'0';
        pr.pb(x);
        mp[x]++;
/*        if(x==2 || x==3 || x==5 || x==7){
         ar.pb(x);
        }*/
        if(isPrime(x)==0)
        {
         npr.pb(x);
        }
      }
      if(npr.size()>=1)
      {
       cout<<1<<endl;
       cout<<npr[npr.size()-1]<<endl;
      }
      else{
       c1=0;
       for(int i=0;i<pr.size();i++)
       {
        for(int j=i+1;j<pr.size();j++)
        {
         if(i==j){continue;}
         //debug((pr[i]*10)+pr[j]);
         ll tmp=(pr[i]*10)+pr[j];
         if(isPrime(tmp)==0)
         {
          cout<<2<<endl;
          cout<<pr[i]<<pr[j]<<endl;c1++;
          break;
         }
        }
        if(c1){break;}
       }
 
      }
 
 
 
 
 
 
/*       if(c1){continue;}
       c2=0;
       for(int i=0;i<pr.size();i++)
       {
        for(int j=0;j<pr.size();j++)
        {
         if(i==j){continue;}
         if(isPrime((pr[j]*10)+pr[i])==0)
         {
          cout<<pr[j]<<pr[i]<<endl;c2++;
          break;
         }
        }
        if(c2){break;}
       }*/
      
 }
//cout<<isPrime(737)<<endl;
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast; 
   solve();          
}