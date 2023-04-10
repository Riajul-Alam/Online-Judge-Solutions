#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ordered_set s;
        ll n,l,r,ans=0;
       cin>>n>>l>>r;
        ll a[n+5];
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        sort(a,a+n);
        s.insert(a[0]);
        for(int i=1;i<n;i++){
           ll x,y;
           x=l-a[i];
           y=r-a[i];
           ans+=(s.order_of_key(y+1)-s.order_of_key(x));
           s.insert(a[i]);
        }
        cout<<ans<<endl; 
 
    }
   return 0;
}