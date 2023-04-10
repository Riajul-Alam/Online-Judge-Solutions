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
#define debug cout<<"OK"<<endl;
int main()
{
    fast;
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; // string s;
      ll a[100005];
      vector<pair<ll,ll>>vp;
      for(int i=0;i<n;i++){
       cin>>a[i];
       vp.push_back(make_pair(a[i],i));
      }
      sort(rall(vp));
      map<ll,ll>mp;
      ll j=0;
      ll last=vp[j].ss;
      m=n;
      while(c1<n){
       for(int i=last;i<m;i++){
        cout<<a[i]<<" ";c1++;
        mp[a[i]]++;
       }
       m=last;
       j++;
       for(int k=j;k<vp.size();k++){
        if(mp[vp[j].ff]){j++;continue;}
        else{last=vp[j].ss;break;}
       }
      }
      cout<<endl;
 }
 
}