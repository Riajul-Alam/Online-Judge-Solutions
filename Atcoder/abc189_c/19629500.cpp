#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int main()
{

  
        ll i,j,x,y,z,count=0,sum=-1,n,m;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            ll k=a[i],ans=0,count=1;
            sum=max(sum,a[i]);
            for(ll j=i+1;j<n;j++)
            {
                count++;
                k=min(k,a[j]);
                sum=max(sum,a[j]);
                ans=count*k;
                sum=max(sum,ans);
            }
        }
        cout<<sum<<endl;
    return 0;
}