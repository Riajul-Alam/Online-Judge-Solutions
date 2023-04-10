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
#define eps 1e-10
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
int main()
{
    fast;
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>x>>y; 
      string s;
      cin>>s;
      vector<ll>v;
      if(s[0]=='1' && s[n-1]=='1')
      {
         for(int i=0;i<n;i++){
          if(s[i]=='0'){c1++;
             while(s[i]=='0'){i++;}
             i--;
          }
 
          }
          
          ll tm=0;
          for(int i=0;i<n;i++){
           if(s[i]=='0'){
            c2=0;
            while(s[i]=='0' && i<n){c2++;i++;}
            v.push_back(c2);tm+=c2;
           }
          }
          if(n-tm>0){v.push_back(n-tm);}
          c1++;
      }  
      else if(s[0]=='0' && s[n-1]=='0')
      {
          for(int i=0;i<n;i++){
          if(s[i]=='1'){c1++;
             while(s[i]=='1'){i++;}
             i--;
          }
         }
        ll tm=0;
          for(int i=0;i<n;i++){
           if(s[i]=='1'){
            c2=0;
            while(s[i]=='1' && i<n){c2++;i++;}
            v.push_back(c2);tm+=c2;
           }
          }
         if(n-tm>0){v.push_back(n-tm);}
         c1++;
      }
      else{
         for(int i=0;i<n;i++){
          if(s[i]=='1'){c1++;
             while(s[i]=='1'){i++;}
             i--;
          }
         } 
          ll tm=0;
          for(int i=0;i<n;i++){
           if(s[i]=='0'){
            c2=0;
            while(s[i]=='0' && i<n){c2++;i++;}
            v.push_back(c2);tm+=c2;
           }
          }
         if(n-tm>0){v.push_back(n-tm);}
         c1++;
      }
      
      if(y>=0)
      {
       for(int i=0;i<n;i++){
        ans=ans+x+y;
       }
      }
      else if(y<0)
      {
          for(int i=0;i<v.size();i++)
          {
           ans=ans+(x*v[i])+y;
          }
      }
      // for(int i=0;i<v.size();i++){
      //  cout<<v[i]<<" ";
      // }cout<<endl;
      cout<<ans<<endl;
 
 }
}