#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct A{
 ll index, a[5];
};
bool cmp(A s1,A s2)
{
    ll c1=0;
    for (int j = 0; j < 5; j++)
    {
        if (s1.a[j] < s2.a[j]){
            c1++;
        }
    }
    return c1>=3;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<A> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i].index = i + 1;
            for (int j = 0; j < 5; j++)
            {
                cin >> a[i].a[j];
            }
        }
        sort(a.begin(), a.end(), cmp);
        ll flg=1;
        for(ll i=1;i<n;i++)
        {
            if(!cmp(a[0],a[i]))flg=0;
        }
        if(flg)cout<<a[0].index<<endl;
        else cout<<-1<<endl;
    }
}