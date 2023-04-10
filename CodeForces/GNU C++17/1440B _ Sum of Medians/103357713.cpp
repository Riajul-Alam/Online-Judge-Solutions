#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mk make_pair
ll a[1000005];
int main()
{
 int t = 1;
 cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, c1 = 0, c2 = 0, total = 1, sum = 0;
  cin >> n >> k;
  ll Count=0;
  a[1000005]={};
  for (int i = 0; i < (n * k); i++)
  {
   cin >> a[i];
  }
  sort(a, a + (n * k));
        ll med=(n/2); 
         n=(n*k);
        for(int i=n-1;i>=0 && k>0;i--)
        {
           if(Count==med)
           {
            sum+=a[i];Count=0;k--;
           }
           else
           {
            Count++;
           } 
        }
        cout<<sum<<endl;
 
 }
}