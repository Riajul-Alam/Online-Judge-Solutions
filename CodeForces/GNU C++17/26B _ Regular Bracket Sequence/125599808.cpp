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
 string s;
 cin>>s;
 ll n,m,ans=0,c1=0,c2=0;
 n=s.size();
 stack<char>st,st2;
 for(int i=0;i<n;i++)
 {
  if(st.empty()){
   st.push(s[i]);
  }
  else if(s[i]==')' && st.top()=='('){
   st.pop();
  }
  else{st.push(s[i]);}
 }
    cout<<n-st.size()<<endl;
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