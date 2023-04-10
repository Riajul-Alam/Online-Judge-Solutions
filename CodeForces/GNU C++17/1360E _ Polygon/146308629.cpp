//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;i++){
     cin>>a[i];
    }
    for(int i=n-2;i>=0;i--)
    {
     for(int j=n-2;j>=0;j--)
     {
      if(a[i][j]=='1' && a[i+1][j]=='0' &&  a[i][j+1]=='0')
      {
        cout<<"NO"<<endl;return;
      }
     }
    }
    cout<<"YES"<<endl;
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast;
   ll t;cin>>t;while(t--) 
   solve();          
}