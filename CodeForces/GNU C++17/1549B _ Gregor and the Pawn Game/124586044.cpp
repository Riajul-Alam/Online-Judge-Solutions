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
void solve()
{   
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; 
   string s1,s2,s3,s4;
   cin>>s1>>s2;
   s3=s1,s4=s2;
   x=n;
      for(int i=0;i<n;i++)
      {
       if(s2[i]=='1')
       {   
        ll remain=n-2;
        if(s1[i]=='0')
        {
         c1++;
         s1[i]='0';
        }
        else if(i-1>=0 && s1[i-1]=='1')
        {
         s1[i-1]='0';
         c1++;
        }
        else if(i+1<n && s1[i+1]=='1')
        {
         s1[i+1]='0';
         c1++;
        }  
       }
      }
 
     for(int i=n-1;i>=0;i--)
     {
      if(s4[i]=='1')
      {
       if(s3[i]=='0')
       {
        s3[i]='0';
        c2++;
       }
       else if(i+1<n && s3[i+1]=='1' )
        {
         s3[i+1]='0';
         c2++;
        } 
        else if(i-1>=0 && s3[i-1]=='1')
        {
         s3[i-1]='0';
         c2++;
        }
      }
     }
     cout<<max(c1,c2)<<endl;
        
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