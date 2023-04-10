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
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0,index,start;
   cin>>n; 
      vector<ll>v1,v2;
      for(int i=0;i<n;i++){
       cin>>x;
       v1.pb(x);
       v2.pb(x);
      }
      sort(all(v2));
      for(int i=0;i<n;i++)
      {
       if(v1[i]!=v2[i]){
        start=i;break;
       }
      }
      ll mn=v2[start];
 
      for(int i=0;i<n;i++)
      {
       if(v1[i]==v2[i]){c1++;}
      }
      if(c1==n){cout<<"yes"<<endl;cout<<1<<" "<<1<<endl;continue;}
      
      for(int i=start;i<n;i++)
      {
       if(v1[i]==mn){
        index=i;break;
       }
      }
 
      ll i=start,j=index;
      while(i<j)
      {
       swap(v1[i],v1[j]);
       i++,j--;
      }
      c1=0;
      for(int i=0;i<n;i++){
       if(v1[i]==v2[i]){c1++;}
      }
 
      if(c1==n)
      {
       cout<<"yes"<<endl;
       cout<<start+1<<" "<<index+1<<endl;
      }
      else{
        cout<<"no"<<endl;
      }
 
 
 }
}