//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int backT(int root,int des)
{
 int ans=0;
 while(des>root)
 {
  ans++;
  if(root==des)break;
  if(des%2)des++;
  else des/=2;
 }
 ans+=abs(root-des);
 return ans;
}
void solve()
{
    int n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    ans=backT(n,m);
    cout<<ans<<endl;
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   //ll t;cin>>t;while(t--) 
   solve();          
}