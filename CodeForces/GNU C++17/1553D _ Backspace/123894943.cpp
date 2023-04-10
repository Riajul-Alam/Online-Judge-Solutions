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
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   string s,t;
   cin>>s>>t;
   n=s.size();
   m=t.size();
      
   while(m>0 && n>0)
   {
    if(s[n-1]==t[m-1]){
     n--;
     m--;
    }
    else{
     n-=2;
    }
   }
   //cout<<n<<" "<<m<<endl;
   if(m==0){cout<<"YES"<<endl;}
   else{ cout<<"NO"<<endl;}
 
 }
}