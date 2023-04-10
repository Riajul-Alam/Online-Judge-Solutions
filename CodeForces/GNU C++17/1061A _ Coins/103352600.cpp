#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mk make_pair
int main()
{
 int t=1;
 //cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, c1 = 1, c2 = 1, total = 1, sum = 0;
  cin >> n>>k;
        if(n>=k){cout<<1<<endl;}
        else
        {
         if(k%n==0)
         {
          cout<<(k/n)<<endl;
         }
         else
         {
         cout<<(k/n)+1<<endl; 
         }
        }
 
 }
}