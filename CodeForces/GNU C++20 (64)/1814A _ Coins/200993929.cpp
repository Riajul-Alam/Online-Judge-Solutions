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
void solve()
{
    ll n,k,x;
    cin>>n>>k;
    if(n%2 && k%2)cout<<"YES"<<endl;
    else if(n%2==0 && k%2)cout<<"YES"<<endl;
    else if(n%2==0 && k%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   ll t;cin>>t;while(t--) 
   solve();           
}