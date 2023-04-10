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
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,ans=0;
   cin>>n>>x>>y>>z;
   // if(n<=x || n<=y || n<=z)
   // {
   //  cout<<min(abs(n-x),min(abs(n-y),abs(n-z)))<<endl;
   // }else{
   ll pp=(n/x);
   ll q=(n/y);
   ll r=(n/z);
   ll a,b,c,d,e; 
 if(n==(pp*x)){a=abs(((pp)*x)-n);}
 else{a=abs(((pp+1)*x)-n);}
 
  if(n==(q*y)){b=abs(((q)*y)-n);}
     else{b=abs(((q+1)*y)-n);}
 
 if(n==(r*z)){c=abs(((r)*z)-n);}
     else{c=abs(((r+1)*z)-n);}
     cout<<min(a,min(b,c))<<endl;
 //}
}
return 0;
}