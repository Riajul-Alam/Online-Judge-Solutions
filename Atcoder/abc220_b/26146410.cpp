//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#include<iostream>
#include<numeric>
#include<tuple>
#include<bitset>
#include<iomanip>
#include<stdlib.h>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<math.h>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<sstream>
#include<string.h>
#include<deque>
#include<set>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define pf push_front
#define in insert
#define eb emplace_back
#define ppb pop_back
#define ppf pop_front
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fnd(a,x) find(all(a),x) // indicate FO index=(pos-a.begin())
#define LB(a,X) lower_bound(all(a),X)-a.begin()
#define UB(a,X) upper_bound(all(a),X)-a.begin()
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
ll val(char c)
{
    if (c >= '0' && c <= '9')
        return (ll)c - '0';
    else
        return (ll)c - 'A' + 10;
}
 
ll toDeci(string str, ll base)
{
    ll len = str.size();
    ll power = 1;
    ll num = 0;
    ll i;
    for (i = len - 1; i >= 0; i--)
    {
        num += val(str[i]) * power;
        power = power * base;
    }
 
    return num;
}
string NumberToString(ll number){
	string s;
    while(number>0){
    	ll r=number%10;
    	char p=r+'0';
    	s=s+p;
    	number=number/10;
    }
    reverse(s.begin(),s.end());
    return s;
}
void solve()
{
    ll base,n,m;
    cin>>base>>n>>m;
    string s1=NumberToString(n),s2=NumberToString(m);
    ll x=toDeci(s1, base);
    ll y=toDeci(s2, base);
    cout<<x*y<<endl;
}
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   solve();         	
}