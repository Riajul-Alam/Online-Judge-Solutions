//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define pf push_front
#define in insert
#define eb emplace_back
#define ppb pop_back
#define ppf pop_front
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fnd(a,x) find(all(a),x) // indicate FO index=(pos-a.begin())
#define LB(a,X) lower_bound(all(a),X)-a.begin()
#define UB(a,X) upper_bound(all(a),X)-a.begin()
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
bool isPrime(int N){ for(int i=2;i*i<=N;++i){if(N%i==0) return false;}return true;}
void solve()
{   
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,sum=0,c1=0,c2=0;
   cin>>n;
   vector<pair<ll,ll>>a(n);
   for(int i=0;i<n;i++)
   {
     cin>>a[i].ff;a[i].ss=i+1;
     if((a[i].ff)%2)
      {
       c1++;
      }
     else c2++;
   }
  // debug(c1)
  // debug(c1)debug(c2)
   sort(all(a));
   for(int i=n-1;i>=0;i--){
    sum+=a[i].ff;
   }
   if(isPrime(sum)){
    ll ind=0;
    cout<<n-1<<endl;
    for(int i=0;i<n;i++){
     if(!isPrime(sum-a[i].ff)){
      ind=i;break;
     }
    }
    for(int i=0;i<n;i++){
     if(i==ind)continue;
     else cout<<a[i].ss<<" ";
    }cout<<endl;
   }else{
    cout<<n<<endl;
    for(int i=0;i<n;i++){
     cout<<a[i].ss<<" ";
    }cout<<endl;
   }
   //debug(c2)
 
 
 }
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