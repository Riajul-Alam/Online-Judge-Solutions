//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    queue<ll>q;
    q.push(1);
    ll ind=1;
    c1=1;
    while(!q.empty())
    {
     ans++;
     ll crCount=0;
     for(int i=0;i<c1;i++)
     {
      ll u=q.front();
      q.pop();
      ll last=-1;
      while(((ind<n)&&(a[ind]>last)))
      {
       last=a[ind];q.push(last);
       ind++;crCount++;
      }
     }
     c1=crCount;
    }
    cout<<ans-1<<endl;
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   ll t;cin>>t;while(t--) 
   solve();          
}