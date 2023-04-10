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
 ll ar[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000};
 ll ab[10]={1,11,101,1001,10001,100001,1000001,10000001,100000001};
 int t;
 cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, sum = 0, c1 = 0, c2 = 0, ans = 0;
  ll a, b, c;
  cin >> a >> b >> c;
  //if(c==1){
   if(a==c){
   cout<<ar[a-c]*ar[c-1]<<" ";
   }
   else{
    cout<<ar[a-c]*ar[c-1]<<" ";
   }
   if(b==c){
   cout<<ab[b-c]*ar[c-1]<<" ";
   }
   else{
    cout<<ab[b-c]*ar[c-1]<<" ";
   }
   cout<<endl;
  //cout<<ar[a-1-c]*ar[c-1]<<" "<<ar[b-1-c]*ar[c-1]<<endl; 
  //}
  //cout<<ar[a-1-c]*ar[c-1]<<" "<<ar[b-1-c]*ar[c-1]<<endl;
 }
}