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
int main()
{
    fast;
 int t=1;
 //cin>>t;
 //while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0,one=0;
   cin>>n>>k;
   vector<ll>v,v1;
   for(int i=0;i<n;i++)
   {
     ll val;cin>>val;
     v.push_back(val);
     if(val==1){one++;}
   }
   v1=v;
  // sort(rall(v1));
   while(k--){
    cin>>x>>y;
    //if(x==2 && c1==0){sort(rall(v));c1++:}
    if(x==1){
     if(v[y-1]==1){one--;}
     else{one++;}
          v[y-1]=1-v[y-1]; 
          //cout<<v[y-1]<<endl;
    }
    else{
         if(one>=y){
          cout<<1<<endl;
         }
         else{
          cout<<0<<endl;
         }
    }
   }
 
 }
}