#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[100005],b[100005],n;
        cin>>n;
        long long int sum=0,sum1=0,sum2=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(int i=0; i<n; i++)
        {
            if(sum1==sum2 && a[i]==b[i])
                sum=sum+a[i];
            sum1=sum1+a[i];
            sum2=sum2+b[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
