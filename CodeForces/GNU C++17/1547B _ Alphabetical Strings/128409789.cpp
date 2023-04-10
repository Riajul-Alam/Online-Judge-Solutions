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
   n=s.size();
   set<char>st;
   ll pos=-1;
   for(int i=0;i<n;i++)
   {
    if(s[i]=='a'){pos=i;}st.insert(s[i]);
   }
   if(st.size()!=n || pos==-1){ cout<<"NO"<<endl;continue;}
   for(int i=pos;i<n-1;i++)
   {
    if(s[i+1]<s[i]){c1++;break;}
   }
   for(int i=pos;i>0;i--)
   {
    if(s[i]>s[i-1]){c1++;break;}
   }
   char ch='a';
   for(auto q:st)
   {
    if(q!=ch){
     c1++;break;
    }
    ch++;
   }
 
   if(c1){ cout<<"NO"<<endl;}
   else{
    cout<<"YES"<<endl;
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