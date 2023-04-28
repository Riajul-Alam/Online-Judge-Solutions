#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2*100005];
    long long int n,sum=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<((n*(n+1))/2)-sum<<endl;
    return 0;
}