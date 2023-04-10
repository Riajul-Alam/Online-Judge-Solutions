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
 int tt;
 cin>>tt;
 while(tt--)
 {
   ll n,m,sum=0,c1=0;
   cin>>n;
      ll a[1000];
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   ll pr[1005];
   pr[0]=a[0];
   for(int i=1;i<n;i++)
   {
       pr[i]=pr[i-1]+a[i];
   }
   for(int i=0;i<n;i++)
   {
    sum+=i;
    if(pr[i]<sum){c1++;break;}
   }   
   if(c1==0){cout<<"YES"<<endl;}
   else{cout<<"NO"<<endl;}
 
 }
 return 0;
}