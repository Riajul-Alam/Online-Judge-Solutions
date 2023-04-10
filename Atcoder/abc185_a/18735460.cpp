#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define exist(c, val) ((c).find(val) != (c).end())
#define clr(cnt, x) memset((cnt), (x), sizeof(cnt))
#define pb push_back
#define ff first
#define ss second
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  
    ll n,m,k,x,y,Count=0,c1=0,c2=0,ans;
    ll a[100005];
    //cin >> n;
    set<ll>s;
    for(int i=0;i<4;i++)
    {
    	cin>>a[i];
     // s.insert(x);
    }
    sort(a,a+4);
    cout<<a[0]<<endl;
    
  return 0;
}