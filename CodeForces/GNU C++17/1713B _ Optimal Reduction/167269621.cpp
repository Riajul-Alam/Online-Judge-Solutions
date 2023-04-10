//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld; 
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define pf push_front
#define in insert
#define ppb pop_back
#define ppf pop_front
#define nl '\n'
#define sp ' '
 
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
void solve()
{
    ll n,m,i,j,k,c1=0;
    cin>>n;
    vector<ll>a(n+5);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
 
    for(int i=1;i<n;i++){
     if(a[i]<a[i-1]){
      j=i+1;
      while(j<n && a[i]==a[j])j++;
      if(a[j]>a[i] && j<n){
       c1++;
       break;
      }
     }
    }
    if(c1==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast;
   ll t;cin>>t;while(t--) 
   solve();          
}