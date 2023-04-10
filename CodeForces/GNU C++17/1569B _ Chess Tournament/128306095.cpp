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
      ll a[n+5];
   vector<ll>v;
   string s;
   cin>>s;
   char ch[55][55],ch2[55],ch3[55];
   mem(ch,'.');
   for(int i=0;i<n;i++)
   {
    ch[i][i]='X';
    if(s[i]=='1')
    {
     for(int j=0;j<n;j++)
     {
             if(i==j){
              ch[i][j]='X';
             }
             else{
              ch[i][j]='=';
             }
     }     
    }
 
   }
     bool ok=0,f=0;
   for(int i=0;i<n;i++)
   {
    f=0;
     if(s[i]=='2')
     {
      for(int j=0;j<n;j++)
      {
               if(ch[i][j]=='.' && ch[j][i]=='.')
               {
                ch[i][j]='+';
                ch[j][i]='-';
                f=1;break;
               }
      }
      if(f==0){ok=true;break;}     
    }
   }
   if(ok){ cout<<"NO"<<endl;continue;}
   cout<<"YES"<<endl;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
     if(ch[i][j]=='.'){ch[i][j]='=';}
     cout<<ch[i][j];
    }cout<<endl;
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