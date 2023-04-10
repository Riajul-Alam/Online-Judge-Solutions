#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,j;
    long long int sum=0;
    cin>>num;
    if(num==1)
    {
        cout<<num<<endl;
    }
    else if(num==2)
    {
        cout<<num<<endl;
    }
    else
    {
        sum=0;
        for(i=1; i<=num; i++)
        {
            if(i%3!=0 && i%5!=0)
            {
                sum=sum+i;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
