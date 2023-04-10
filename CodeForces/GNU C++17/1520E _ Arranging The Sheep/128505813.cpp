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
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans1=0,ans2=0;
   cin>>n; 
      ll a[n+5];
   vector<ll>v;
   string s;
   cin>>s;
   ll First=0,last=0,p=-1,q=-1;
   for(int i=0;i<n;i++)
   {
    if(s[i]=='*'){
     First=i;break;
    }
   }
   for(int i=n-1;i>=0;i--)
   {
    if(s[i]=='*'){
     last=i;break;
    }
   }
   x=0;
 for(int i=First;i<=last;i++){if(s[i]=='.'){p=i;break;}}
 for(int i=last;i>=First;i--){if(s[i]=='.'){q=i;break;}}
 for(int i=First;i<=last;i++){if(s[i]=='*'){x++;}}  
   
   ll tmp=p;
   if(p==-1 || q==-1){cout<<0<<endl;continue;}
   ll tm1=((x+1)/2);//,tm2=((x+2)/2);
 
   ll mid1=0;
   ll mid2=0;
   c1=0,c2=0;
  // debug(tm2);
  // debug(tm1);
   for(int i=First;i<=last;i++)
   {
    if(s[i]=='*'){c2++;}
    if(c2==tm1){mid1=i;break;}
   }
/*   tmp=0;
   c1=0;
   for(int i=mid2;i<=last;i++)
   {
    if(c1==0 && s[i]=='.')
    {
     tmp=i;c1++;
    }
    else if(s[i]=='*')
    {
     if(c1){
      ans1=ans1+(i+1)-(tmp+1);tmp++;
     }
    }
   }
   c1=0,tmp=0;
   for(int i=mid2;i>=First;i--)
   {
    if(c1==0 && s[i]=='.')
    {
     tmp=i;c1++;
    }
    else if(s[i]=='*')
    {
      if(c1){
          ans1=ans1+(tmp+1)-(i+1);tmp--;
     }
    }    
   }*/
   c1=0,tmp=0;
   for(int i=mid1;i<=last;i++)
   {
    if(c1==0 && s[i]=='.')
    {
     tmp=i;c1++;
    }
    else if(s[i]=='*')
    {
     if(c1){
       ans2=ans2+(i+1)-(tmp+1);tmp++;
     }
    }
   }
   c1=0,tmp=0;
   for(int i=mid1;i>=First;i--)
   {
    if(c1==0 && s[i]=='.')
    {
     tmp=i;c1++;
    }
    else if(s[i]=='*')
    {
     if(c1){
      ans2=ans2+(tmp+1)-(i+1);tmp--;
     }
    }    
   }
 //  debug(tm1);
  // debug(x);
   cout<<ans2<<endl;
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