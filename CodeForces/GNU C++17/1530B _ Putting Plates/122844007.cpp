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
   cin>>n>>m; 
   if(n%2!=0){
   for(int i=0;i<m;i++)
   {
    if(i%2==0){
    cout<<1;
    }else{cout<<'0';}
    
   }cout<<endl;
   c1=1;
   for(int i=1;i<n-1;i++)
   {
    if(c1%2==0)
    {
     for(int j=0;j<m;j++){
     if(j==0 || j==m-1)
     {
      cout<<1;
     }else{cout<<"0";}
      }
    }else{
     for(int j=0;j<m;j++){cout<<'0';}
    }
   cout<<endl;c1++;
   }
   for(int i=0;i<m;i++)
   {
    if(i%2==0){
    cout<<1;
    }else{cout<<'0';}
   }
 
 }
 else{
 for(int i=0;i<m;i++)
   {
    if(i%2==0){
    cout<<1;
    }else{cout<<'0';}
    
   }cout<<endl;
   c1=1;
   for(int i=1;i<n-2;i++)
   {
    if(c1%2==0)
    {
     for(int j=0;j<m;j++){
     if(j==0 || j==m-1)
     {
      cout<<1;
     }else{cout<<"0";}
      }
    }else{
     for(int j=0;j<m;j++){cout<<'0';}
    }
   cout<<endl;c1++;
   }
   for(int i=0;i<m;i++)
   {
    cout<<'0';
   } cout<<endl;
   for(int i=0;i<m;i++)
   {
    if(i%2==0){
    cout<<1;
    }else{cout<<'0';}
   } 
 }
 
 
   if(t>0){cout<<endl;}
 }
}