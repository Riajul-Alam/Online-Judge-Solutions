#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    int rem;
    rem=n%10;
    if(rem==2 || rem==4 || rem==5 || rem==7 || rem==9){cout<<"hon"<<endl;}
    else if(rem==0 || rem==1 || rem==6 || rem==8){cout<<"pon"<<endl;}
    else if(rem==3){cout<<"bon"<<endl;}
    return 0;
}
