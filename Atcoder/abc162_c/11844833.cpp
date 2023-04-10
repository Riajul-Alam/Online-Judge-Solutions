#include<bits/stdc++.h>
using namespace std;
int main()
{
    int gd,sum=0;
    cin>>gd;
    for(int i=1; i<=gd; i++)
    {
        for(int j=1; j<=gd; j++)
        {
            for(int k=1; k<=gd; k++)
            {
                sum=sum+(__gcd(k,__gcd(i,j)));
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
