#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug cout<<"OK"<<endl;
int main()
{
 
 
 ll n, m, x, y, z, k, s1 = 0, s2 = 0, s = 0, c2 = 0, ans = 0;
 cin >> n >> m;
 ll a[100005];
 vector<ll>v;
 for (int i = 0; i < n; i++)
 {
  cin >> a[i];
  s1 = s1 + a[i];
 }
 ll mx=0,c1=0;
 for(int i=0,j=0;i<n;i++)
 {
  s+=a[i];
  if(s>m)
  {
   s-=a[j];
   j++;
  }
  else
  {
   c1++;
  }
  mx=max(c1,mx);
 }
 if(s<=m){mx=max(c1,mx);}
 cout<<mx<<endl;
}