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
 //cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, sum = 0, c1 = 0, c2 = 0, ans = 0;
  cin >> n >> m; // string s;
  ll a[100005];
  vector<ll>v;
  for (int i = 1; i <= n; i++)
  {
   cin >> a[i];
  }
  ll i,j;
  i=j=m;
  while (1) {
   if(i==0 && j == n + 1){break;}
   if (i > 0 && j < n + 1) {
    if (a[i] == 1 && a[j] == 1 && i!=j) {
     c1+=2;
    }
    else if (a[i] == 1 && a[j] == 1 && i==j) {
     c1++;
    }
    i--, j++;
   }
   else if (i > 0) {
    if (a[i] == 1) {
     c1++;
    }
    i--;
   }
   else if (n+ 1 > j) {
    if (a[j] == 1) {
     c1++;
    }
    j++;
   }
  }
  cout<<c1<<endl;
 
 }
}