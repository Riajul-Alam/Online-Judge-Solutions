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
 int t = 1;
 cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, sum = 0, c1 = 0, c2 = 0, ans = 0;
  cin >> n >> k;
  vector<ll>v;
  x=(k+1)/2;
  for(int i=x;i<k;i++){
   v.push_back(i);
  }
  for(int i=k+1;i<=n;i++){
   v.push_back(i);
  }
  if(v.size()==0){
   cout<<0;
  }
  else{
   cout<<v.size()<<endl;
   for(auto q:v){
    cout<<q<<" ";
   }
  }
  cout << endl;
 }
}