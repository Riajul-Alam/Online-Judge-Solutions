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
ll a[100005],n;
ll query(ll q)
{
 if(1<=q && q<=n){
 cout<<"? "<<q<<endl;
 cin>>a[q];
     }
}
void solve()
{   
 cin>>n;
 a[0] = a[n + 1] = n + 1;
 int L = 1, R = n;
 while (L < R)
 {
  int m = (L + R) / 2;
  query(m);
  query(m + 1);
  if (a[m] < a[m + 1])
   R = m;
  else
   L = m + 1;
 }
 cout<<"! "<<L<<endl;
   
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