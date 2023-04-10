 
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
    ll a,b,d,m;
    cin>>a>>b;
    ll M=0,D=0;
    ll curA=a,curB=b;
    while(1)
    {
     if(curA<curB)
     {
      M++;
      curA=curA+a;
     }
     else if(curA>curB)
     {
      D++;
      curB=curB+b;
     }
     else if(curB==curA)
     {
      if(M>D){D++;}
      else M++;
      break;
     }
    }
    if(M>D)
    {
     cout<<"Dasha"<<endl;
    }
    else if(M<D)
    {
    cout<<"Masha"<<endl; 
    }
    else{
     cout<<"Equal"<<endl;
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