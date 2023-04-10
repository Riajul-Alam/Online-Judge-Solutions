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
   cin>>n>>m; // string s;
      ll a[100005];
   vector<ll>v;
   deque<ll>dq;
   for(int i=0;i<n;i++)
   {
     //cin>>a[i];
     cin>>x;
     dq.push_back(x);
   }
   while(m--){
    cin>>y;
    ll i=1,c1=0;
    for(auto q:dq){
     if(q==y){
      z=q;
      v.push_back(i);
      dq.erase(dq.begin()+i-1);
      dq.push_front(z);
      //c1++;
      break;
     }
     i++;
    }
   }
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
 
 }
}