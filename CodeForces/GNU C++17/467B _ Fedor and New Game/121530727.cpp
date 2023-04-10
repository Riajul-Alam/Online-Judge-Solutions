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
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
int main()
{
    fast;
 int t=1;
 // cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>m>>k;
   bitset<32>ar[m+10];
   for(int i=0;i<m+1;i++)
   {
    cin>>x;
    ar[i]=x;
   }
   for(int i=0;i<m;i++)
   {
    ll dif=0;
    for(int j=0;j<32;j++)
    {
     if(ar[i][j]!=ar[m][j])
     {
      dif++;
     }
    }
    if(dif<=k){ans++;}
   }
   cout<<ans<<endl;
 
 }
}