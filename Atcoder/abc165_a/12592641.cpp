#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a,b,n;
    cin>>n;
    cin>>a>>b;
    int cnt=0;
    for(int i=a;i<=b;i++)
    {
        if(i%n==0)
        {
            cnt++;
            break;
        }
    }
    if(cnt==0)
    {
        cout<<"NG"<<endl;
    }
    else
    {
        cout<<"OK"<<endl;
    }
    return 0;
}
