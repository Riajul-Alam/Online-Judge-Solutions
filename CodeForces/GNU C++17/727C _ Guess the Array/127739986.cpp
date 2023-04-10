 
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
#define debug(x) cout<<#x<<" "<<x<<endl;
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
ll MaxN=5555;
ll query(ll q,ll q1)
{
 cout<<"? "<<q<<" "<<q1<<endl;
 cout.flush();
 ll x;
 cin>>x;
 return x;
}
void solve()
{   
  ll n;
  ll a[MaxN];
  cin>>n;
  ll x1,x2,x3,x4;
  x1=(query(1,2));
  x2=query(2,3);
  x3=query(1,3);
  a[1]=(x3-x2+x1)/2;
  a[2]=(x1-a[1]);
  a[3]=(x3-a[1]);
  for(ll i=4;i<=n;i++)
  {
     a[i]=query((ll)1,i)-a[1];
  }
  cout<<"! ";
  for(ll i=1;i<=n;i++)
  {
   cout<<a[i]<<" ";
  }
  cout<<endl;
  return;
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast; 
   solve();          
}