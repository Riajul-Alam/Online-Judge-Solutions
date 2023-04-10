//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    vector<ll>a(n);
    vector<ll>oneIndex,twoIndex,threeIndex;// 1 2 3 এর index store এর jonno
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]==1){
       oneIndex.pb(i+1);
      }
      else if(a[i]==2){
       twoIndex.pb(i+1);
      }
      else{
       threeIndex.pb(i+1);
      }
    }
    ll oneCount=oneIndex.size();
    ll twoCount=twoIndex.size();
    ll threeCount=threeIndex.size();
    ll total=min({oneCount,twoCount,threeCount});
    cout<<total<<endl;
    for(int i=0;i<total;i++){
     cout<<oneIndex[i]<<" "<<twoIndex[i]<<" "<<threeIndex[i]<<endl;
    }
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast;
  // ll t;cin>>t;while(t--) 
   solve();          
}