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
      ll start=0;
      for(int i=0;i<n;i++)
      {
       if(s[i]=='R'|| s[i]=='B')
       {
        c1++;start=i;break;
       }
      }
      if(c1==0)
      {
       for(int i=0;i<n;i++)
       {
        if(i%2){cout<<'B';}
        else{cout<<'R';}
       }cout<<endl;
       continue;
      }
      ll tmp=start-1;
      while(tmp>=0)
      {
       if(s[tmp+1]=='R' && s[tmp]=='?')
       {
        s[tmp]='B';
       }
       else if(s[tmp+1]=='B' && s[tmp]=='?')
       {
        s[tmp]='R';
       }
       tmp--;
      }
      tmp=start+1;
      while(tmp<n)
      {
       if(s[tmp-1]=='R' && s[tmp]=='?')
       {
        s[tmp]='B';
       }
       else if(s[tmp-1]=='B' && s[tmp]=='?')
       {
        s[tmp]='R';
       }
       tmp++;      
      }
      cout<<s<<endl;
 
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