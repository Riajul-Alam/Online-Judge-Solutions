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
 cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, sum = 0, c1 = 0, c2 = 0, ans = 0;
  cin >> n >> m; // string s;
  ll a[100005], in = 0;
  vector<ll>v;
  for (int i = 0; i < n; i++)
  {
   cin >> a[i];
  }
  ll i=0,j=n-1;
  while(1){
   if(m==c1){break;}
   while(a[i]==0 && i<n){
    i++;
   }
   if(i==n){break;}
   a[i]--;a[j]++;
   c1++;
  }
  for(int i=0;i<n;i++){
   cout<<a[i]<<" ";
  }cout<<endl;
  
 }
 //cout<<"YES"<<endl;
}