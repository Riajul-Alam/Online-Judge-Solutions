#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[1005],Count=0,x,y,odd=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            {
                odd++;
            }
        }
        if(odd==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
