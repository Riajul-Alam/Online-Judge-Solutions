//Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef long double ld;
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
  ld n,x,y,z,k,sum=0,ans=0;
   cin>>n>>x>>y>>z;
  ld a,b,c;
  a=ceil(n/x);
  b=ceil(n/y);
  c=ceil(n/z);
  ll m=n;
  ll p=abs((a*x)-m),q=abs((b*y)-m),r=abs((z*c)-m);
     cout<<min(p,min(q,r))<<endl;
}
return 0;
}