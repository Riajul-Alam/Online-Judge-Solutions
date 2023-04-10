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
    fast;
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; // string s;
      ll a[100005];
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   x=0,y=0,z=0;
   for(int i=0;i<n;i+=3){
    x+=a[i];
   }
   for(int i=1;i<n;i+=3){
    y+=a[i];
   }
   for(int i=2;i<n;i+=3){
    z+=a[i];
   }
   if(x>=y && x>=z){
        cout<<"chest"<<endl;
   }else if(y>=x && y>=z){
        cout<<"biceps"<<endl;    
   }else{
        cout<<"back"<<endl;
   }
 
 }
}