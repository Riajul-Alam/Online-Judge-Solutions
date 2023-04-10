//Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,k;
bool good(ll x)
{
 return (x-(x/n))>=k;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   cin>>n>>k;
   ll l=0,r=1;
   while(!good(r)){r*=2;}
   while(l+1<r){
    ll mid=(l+r)/2;
    if(good(mid)){
     r=mid;
    }else{
     l=mid;
    }
   }
   cout<<r<<endl;
 }
 return 0;
}