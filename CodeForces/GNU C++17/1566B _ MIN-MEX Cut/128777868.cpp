//Bismillahir Rahmanir Raheem
//#include<bits/stdc++.h>
#include<iostream>
#include<numeric>
#include<tuple>
#include<bitset>
#include<iomanip>
#include<stdlib.h>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<math.h>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<sstream>
#include<string.h>
#include<deque>
#include<set>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mkp make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define  mem(a,b)   memset(a,b,sizeof(a))
#define debug(x) cout<<#x<<" "<<x<<endl;
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
void solve()
{   
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   string s;
   cin>>s;
   map<ll,ll>mp;
   n=s.size();
   for(int i=0;i<n;i++)
   {
    mp[s[i]]++;
   }
   if(mp['0']==n){cout<<1<<endl;continue;}
   else if(mp['1']==n){cout<<0<<endl;continue;}
   for(int i=0;i<n;i++)
   {
    if(s[i]=='0' && i==0){
     c1++;
    }
    else if(s[i]=='0' && s[i-1]=='0' && i-1>=0)
    {
     continue;
    }
    else if(s[i]=='0' && s[i-1]=='1' && i-1>=0)
    {
     c1++;
    }
   }
   cout<<min(c1,(ll)2)<<endl;
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