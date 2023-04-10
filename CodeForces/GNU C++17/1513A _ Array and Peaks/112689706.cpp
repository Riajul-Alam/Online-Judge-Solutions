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
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0,p;
   cin>>n>>m;
   if(m==0){
    for(int i=1;i<=n;i++){
     cout<<i<<" ";
    }cout<<endl;
   }else{
    x=((n-1)/2);
    if(m>x){
     cout<<-1<<endl;
    }else{
     ll a[n+5],sm=1;
     for(int i=0;i<n;i++){
      a[i]=sm;
      sm++;
     }
     for(int i=1;i<n-1;i+=2){
      if(m==0){break;}
      m--;
      ll tm=a[i];
      a[i]=a[i]+1;
      a[i+1]=tm;
     }
     for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
     }
           cout<<endl;
    }
   }
      
 
 }
}