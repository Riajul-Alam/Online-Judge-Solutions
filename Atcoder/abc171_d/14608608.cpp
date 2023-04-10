#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M_PI 3.14159265358979323846
const int MOD=1e9+7;
vector<ll>a(100005);
void solve()
{
    int n;
    cin>>n;
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        sum+=(ll)k;
        a[k]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        ll b,c;
        cin>>b>>c;
        sum-=(a[b]*b);
        sum+=(a[b]*c);
        a[c]+=a[b];
        a[b]=0;
        cout<<sum<<endl;
    }

}
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 solve();
 return 0;
}
