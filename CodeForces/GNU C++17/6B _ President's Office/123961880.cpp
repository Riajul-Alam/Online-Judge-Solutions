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
#define eps 1e-10
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
int main()
{
    fast;
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   char C;
   cin>>n>>m>>C;
   vector<vector<char>>v;
   for(int i=0;i<n;i++)
   {
    vector<char>vt;
    string s;
    cin>>s;
    for(int j=0;j<s.size();j++){
     vt.pb(s[j]);
    }
    v.push_back(vt);
   }
   set<char>st;
   for(int i=0;i<v.size();i++)
   {
    for(int j=0;j<v[i].size();j++)
    {
     if(v[i][j]==C)
     {
      if(i+1<n && v[i+1][j]!='.' && v[i+1][j]!=C){st.insert(v[i+1][j]);}
      if(j+1<m && v[i][j+1]!='.' && v[i][j+1]!=C){st.insert(v[i][j+1]);}
      if(i-1>=0 && v[i-1][j]!='.' && v[i-1][j]!=C){st.insert(v[i-1][j]);}
      if(j-1>=0 && v[i][j-1]!='.' && v[i][j-1]!=C){st.insert(v[i][j-1]);}
     }
    }
   }
   cout<<st.size()<<endl;
 }
}