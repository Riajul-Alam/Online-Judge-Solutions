#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[10000],i,j,sum=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    if(sum>n)
    {
        cout<<-1<<endl;
    }
    else{
        cout<<n-sum<<endl;
    }
    return 0;
}
