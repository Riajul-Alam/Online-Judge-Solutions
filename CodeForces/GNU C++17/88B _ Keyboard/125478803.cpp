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
ll Pow(ll a,ll b){ll ans=1;while(b){if(b%2==0){a=a*a;b/=2;}else{ans*=a;b--;}} return ans;}
void solve()
{    
 
    ll n,m,x;
    cin>>n>>m>>x;
    char ar[n+1][m+1];
    map<char,ll>mp,mp1;
    vector<pair<ll,ll>>vp;
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
     {
          cin>>ar[i][j];
          if(ar[i][j]=='S'){vp.pb({i,j});}
          mp[ar[i][j]]++;
     }
    }
    x=x*x;
    ll q;
    cin>>q;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
       char ch=ar[i][j];
       if(ch!='S')
       {
        ll minimumdis=INF;
        for(int k=0;k<vp.size();k++)
        {
         ll dis=((i-vp[k].ff)*(i-vp[k].ff))+((j-vp[k].ss)*(j-vp[k].ss));
         minimumdis=min(minimumdis,dis);
        }
 
        if(mp1.count(ch))
        {
         mp1[ch]=min(mp1[ch],minimumdis);
        }
        else{
         mp1[ch]=minimumdis;
        }
       }
      }
    }
 
    bool flag=true;
    ll cnt=0;
    for(int i=0;i<s.size();i++)
    {
     char ch=s[i];
     if(ch>='a'&&ch<='z')
     {
      if(mp.count(ch)==0){
      flag=false;
      break; 
      }
        }
        else{
         if(mp.count(ch+32))
         {
          if(vp.size()==0){
           flag=false;break;
          }
          else{
           if(mp1[ch+32]>x){cnt++;}
           else continue;
          }
         }
         else
         {
          flag=false;
          break;
         }
        }
    }
    if(flag){cout<<cnt<<endl;}
    else{
     cout<<"-1"<<endl;
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