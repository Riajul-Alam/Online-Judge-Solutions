#include<bits/stdc++.h>
using namespace std;
long long a [100010];
int main ()
{
    int n,Count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==0){Count++;}
    }
    if(Count>0){cout<<0<<endl;return 0;}
    long long sum=1;
    for(int i=0; i<n; i++)
    {
        if(a[i]<=1000000000000000000/sum )
        {
// This condition is equivalent to sum*a[i] <=10ˆ18
            sum=sum*a[i];
        }
        else
        {
           cout<<-1<<endl;
            return 0;
        }
    }
   cout<<sum<<endl;
}
