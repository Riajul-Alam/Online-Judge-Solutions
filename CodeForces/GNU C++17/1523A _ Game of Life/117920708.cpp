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
   cin>>n>>m;
   string s;
   cin>>s;
   while(c2<m){
    c1=0;
    vector<ll>v;
    for(int i=0;i<n;i++){
     if(s[i]=='0'){
      if(s[i-1]=='1' && s[i+1]=='1' && i-1>=0 && i+1<n){
       continue;
      }
                if(i-1>=0 && s[i-1]=='1' && i+1<n && s[i+1]=='0'){
                    c1++;v.push_back(i);
                }else if(i-1>=0 && s[i-1]=='0' && i+1<n && s[i+1]=='1'){
                    c1++;v.push_back(i);
                }else if(i-1<0 && i+1<n && s[i+1]=='1'){
                   c1++;v.push_back(i);
                }else if(i-1>=0 && s[i-1]=='1' && i+1<=n){
                 c1++;v.push_back(i);
                }
     }
    }
    for(int k=0;k<v.size();k++){
      s[v[k]]='1';
    }
    c2++;
    if(c1==0){break;}
   }
 
      for(int i=0;i<n;i++){
       cout<<char(s[i]);
      }cout<<endl;   
 
 }
}