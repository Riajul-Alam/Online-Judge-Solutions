 
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
 ll n,m,c1=0,c2=0,c3=0;
 string a,b;
 cin>>a>>b;
 n=a.size();
 m=b.size();
 
 for(int i=0;i<=n-m;i++)
 {
 
  string str2 = a.substr (i,m);
  if(str2==b){
   c1++;break;
  }
 }
    ll i=0,j=0;
 string sNew="";
 while(i<n && j<m)
 {
        if(a[i]==b[j]){
         sNew+=a[i];
         i++,j++;
        }
        else 
        {
         i++;
        }
 }
 if(sNew==b){c2++;}
 sort(all(a));
 sort(all(b));
 i=0,j=0;
 string sNew1="";
 while(i<n && j<m)
 {
        if(a[i]==b[j]){
         sNew1+=a[i];
         i++,j++;
        }
        else 
        {
         i++;
        }
 }
 
   if(sNew1==b){c3++;}
    if(c1 || c2){
      cout<<"automaton"<<endl;
    }
    else if(c3>0 && n==m)
    {
     cout<<"array"<<endl;
    }
 else if(c3>0 && n>m)
 {
  cout<<"both"<<endl;
 }
 else 
 {
  cout<<"need tree"<<endl;
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