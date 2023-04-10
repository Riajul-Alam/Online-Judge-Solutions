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
   cin>>n; 
      string s;
      cin>>s;
      map<char,ll>mp;
      vector<pair<char,pair<ll,ll>>>pr;
      for(int i=0;i<n;i++){
       mp[s[i]]++;
/*       if(s[i]=='a'){a.pb(mp[i]);}
       else{b.pb(mp[i])}*/
       pr.pb({s[i],{mp[s[i]],i+1}});
      }
 
      for(int i=0;i<n;i++)
      {
       string s1="";
       c1=0,c2=0;
       for(int j=i;j<n;j++)
       {
           if(s[j]=='a'){c1++;}
           else{c2++;}
           if(c1==c2){
            ans++;
            cout<<i+1<<" "<<j+1<<endl;break;
           }
       }
       if(c1==c2 && ans==0){
            ans++;
            cout<<i+1<<" "<<n<<endl;break;       
       }
       if(ans){break;}
       
      }
      if(ans==0){
       cout<<-1<<" "<<-1<<endl;
      }
 
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