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
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; 
   vector<ll>v1,v2,v3;
   for(int i=0;i<n;i++)
   {
     cin>>x;
     if(x%2){v1.push_back(x);}
     else{v2.push_back(x);}
   }
   sort(rall(v1));
   sort(rall(v2));
   for(int i=0;i<v2.size();i++){
         v3.push_back(v2[i]);
   }
   for(int i=0;i<v1.size();i++){
         v3.push_back(v1[i]);
   }
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
     if(v3[i]==1){continue;}
     if(v3[i]%(2*v3[j])==0 || (2*v3[j])%v3[i]==0){
      ans++;
     }else if(v3[i]%2==0 && (2*v3[j])%2==0){
      ans++;
     }else if(__gcd(v3[i],(2*v3[j]))>1){
                 ans++;
     }
    }
   }
      cout<<ans<<endl;
 }
}