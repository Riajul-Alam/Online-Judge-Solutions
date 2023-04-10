#include<bits/stdc++.h>
using namespace std;
int main()
{
    int th,ts,ah,as;
    cin>>th>>ts>>ah>>as;
    while(th>0 && ah>0)
    {
        ah=ah-ts;
        if(ah<=0){break;}
        th=th-as;
    }
    if(th>ah){cout<<"Yes"<<endl;}
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
