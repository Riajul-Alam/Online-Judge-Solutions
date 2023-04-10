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
   cin>>n>>m;
   ll t=0;
   for(int i=0;i<n;i++)
   {
    t=0;
    if(i%2==0){
             for(int j=0;j<m;j++){
              cout<<"#";
             }cout<<endl;
    }else{
     if(c1%2!=0){
      t++;
     }
     if(t==0){
            for(int j=t;j<m-1;j++){
             cout<<".";
            }cout<<"#"<<endl;
    }else{
     cout<<"#";
     for(int j=t;j<m;j++){
      cout<<".";
     }
     cout<<endl;
    }
    c1++;
   }
 
 }
}
}