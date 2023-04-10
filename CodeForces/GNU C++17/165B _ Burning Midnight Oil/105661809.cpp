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
    fast;
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,s1=0,s2=0,s=0,c1=0,c2=0,ans=0;
   cin>>n>>k;
   ll mn=n;
   ll left=1,right=n;
   while(left<right)
   {
    ll mid=(left+right)/2;
    ll sum=mid,i=1,p=mid;
    //cout<<"mid "<<mid<<endl;
    while(p>0)
    {
     ll pq=pow(k,i);
     sum+=(mid/pq);
     p=(mid/pq);
     i++;
     //cout<<"P "<<p<<endl;
    }
    if(sum>=n)
    {
      right=mid;
    }
    else
    {
          left=mid+1;
    }
   }
   cout<<left<<endl;
   
 
 }
}