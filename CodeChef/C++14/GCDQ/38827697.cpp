#include<bits/stdc++.h>
using namespace std;
#define push_back pb;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q,a[100005],gcd,l,r,temp;
        cin>>n>>q;
        ll pre[n+1],suf[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        pre[0]=suf[n+1]=0;
        for(int i=1; i<=n; i++)
        {
            pre[i]=__gcd(pre[i-1],a[i]);

        }
        for(int i=n; i>0; i--)
        {
            suf[i]=__gcd(suf[i+1],a[i]);
        }

        while(q--)
        {
            cin>>l>>r;
            cout<<__gcd(suf[r+1],pre[l-1])<<endl;
        }
    }

    return 0;
}
