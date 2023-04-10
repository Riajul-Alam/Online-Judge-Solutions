#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[10000];
    cin>>n>>k;
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    int sum=0;
    for(int i=0;i<k;i++){sum=sum+a[i];}
    cout<<sum<<endl;
    return 0;
}
