#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,Count=0,a[100005],totalXor=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {

            totalXor=(totalXor^(a[i]+a[i]));

        }
        cout<<totalXor<<endl;
    }
    return 0;
}
