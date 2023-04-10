#include<bits/stdc++.h>
using namespace std;
int main()
{
    double nless,sum=0,val;
    int a[105],n,m,i;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    nless=(1.0/(4*m));
    sort(a,a+n,greater<int>());
    int cnt=0;
    for(i=0; i<m; i++)
    {
        val=(a[i]*1.0)/sum;
            if(val>=nless)
        {
            continue;
        }
        else
        {
            cnt++;
            break;
        }
    }
    if(cnt==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}

