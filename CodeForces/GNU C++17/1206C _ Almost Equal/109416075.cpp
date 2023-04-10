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
     cin>>n;
     if(n%2){
     cout<<"YES"<<endl;
     cout<<1<<" ";  
       x=1;    
       for(int i=1;i<((2*n)/2);i+=2){
           cout<<x+3<<" "<<x+4<<" ";
           x+=4;
       }
       x=2;
       for(int i=1;i<((2*n)/2);i+=2){
           cout<<x<<" "<<x+1<<" ";
           x+=4;
       }
       cout<<(2*n);
       cout<<endl;
     }else{
       cout<<"NO"<<endl;
     }
 
   }
}