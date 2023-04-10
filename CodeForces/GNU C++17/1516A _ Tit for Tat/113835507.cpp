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
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>k; // string s;
      ll a[100005];
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   for(int i=0;i<n-1;i++){
    if(k>=a[i]){
     k-=a[i];
     a[n-1]+=a[i];
     a[i]=0;
    }else{
     a[i]-=k;
     a[n-1]+=k;
     break;
    }
   }
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }cout<<endl;
 
 }
}