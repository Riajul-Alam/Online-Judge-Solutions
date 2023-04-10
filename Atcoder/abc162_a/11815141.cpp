#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,val,cnt=0;
    cin>>n;
    while(n!=0)
    {
        rem=(n%10);
        if(rem==7)
        {
            cnt++;
            break;
        }
        n=n/10;
    }
    if(cnt==0)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
    return 0;
}