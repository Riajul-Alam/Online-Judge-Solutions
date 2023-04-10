 
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
#define MAX 10000000
vector<ll>List,primes;
vector<ll> sieve(int n) {
 ll arr[n+1]={};
 vector<ll> vect; 
 for (ll i = 2; i <= n; i++)
  if (arr[i] == 0) {
   vect.push_back(i); 
   for (int j = 2 * i; j <= n; j += i)arr[j] = 1;
  }
 return vect;
}
ll primeFactorize(ll n)
{
    List.clear();
    ll cnt=0;
    for(auto j:primes)
    {
        if(n%j==0)
        {
           cnt++;
        }   
    }
    if(cnt==2)return 1;
    else return 0;
}
void solve()
{   
 int n,ans=0;cin>>n;
 primes=sieve(3000);
 for(ll i=1;i<=n;i++)
 {
  if(primeFactorize(i))ans++;
 }
 cout<<ans<<endl;
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif 
   solve();          
}