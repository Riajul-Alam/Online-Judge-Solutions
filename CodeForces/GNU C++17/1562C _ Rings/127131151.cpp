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
     string s;
     cin>>s;
     vector<ll>a;
     for(int i=0;i<s.size();i++)
     {
      a.pb(s[i]-'0');
     }
     ll start=0,end=n-1;
     x=(n/2)-1;
  for(int i=n-1;i>x;i--)
  {
   if(s[i]=='0')
   {
    c1++;
    end=i;break;
   }
  }
  if(c1){
   cout<<1<<" "<<end+1<<" "<<1<<" "<<end<<endl;
         continue;
   }  
 
   if(c1==0){   
     for(int i=0;i<n-x;i++)
     {
      if(s[i]=='0')
      {
       c1++;
       start=i;
       c2++;
    cout<<i+1<<" "<<n<<" "<<i+2<<" "<<n<<endl;
       break;
      }
     }
     if(c2){continue;}
     cout<<1<<" "<<n/2<<" "<<2<<" "<<(n/2)+1<<endl;
 
 
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