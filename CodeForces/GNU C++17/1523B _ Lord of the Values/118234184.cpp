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
const ll mod = 1e9 + 7;
int main()
{
    fast;
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; // string s;
      ll a[100005];
   vector<ll>v;
   vector<pair<ll, pair<ll, ll> >> vp;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   for(int i=0;i<n;i+=2){
    if(a[i]==a[i+1]){
             vp.push_back(make_pair(2,make_pair(i+1,i+2)));
             vp.push_back(make_pair(2,make_pair(i+1,i+2)));
             vp.push_back(make_pair(1,make_pair(i+1,i+2)));
             vp.push_back(make_pair(1,make_pair(i+1,i+2)));
             a[i+1]=a[i+1]-a[i];
             a[i+1]=a[i+1]-a[i];
             a[i]=a[i+1]+a[i];
             a[i]=a[i+1]+a[i];
    }else{
           vp.push_back(make_pair(1,make_pair(i+1,i+2)));
           vp.push_back(make_pair(2,make_pair(i+1,i+2)));
           vp.push_back(make_pair(1,make_pair(i+1,i+2)));
           vp.push_back(make_pair(1,make_pair(i+1,i+2)));
           vp.push_back(make_pair(2,make_pair(i+1,i+2)));
           vp.push_back(make_pair(1,make_pair(i+1,i+2)));           
            a[i]=a[i+1]+a[i];
            a[i+1]=a[i+1]-a[i];
            a[i]=a[i+1]+a[i];
            a[i]=a[i+1]+a[i];
            a[i+1]=a[i+1]-a[i];
            a[i]=a[i+1]+a[i];
    }
   }
   cout<<vp.size()<<endl;
   for(int i=0;i<vp.size();i++){
    cout<<vp[i].ff<<" "<<vp[i].ss.ff<<" "<<vp[i].ss.ss<<endl;
   }
      // for(int i=0;i<n;i++){
      //  cout<<a[i]<<" ";
      // }cout<<endl;
 }
}