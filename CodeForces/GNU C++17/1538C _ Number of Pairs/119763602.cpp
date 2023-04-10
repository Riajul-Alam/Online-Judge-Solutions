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
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0,l,r;
   cin>>n>>l>>r; // string s;
      //ll a[100005];
   vector<ll>a(n);
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   sort(a.begin(),a.end());
   for(int i=0;i<n-1;i++){
    auto it1=lower_bound(a.begin()+i+1,a.end(),l-a[i]);
    auto it2=upper_bound(a.begin()+i+1,a.end(),r-a[i]);
        ans+=(it2-it1);
   }cout<<ans<<endl;
 
 }
}