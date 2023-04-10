//Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
int main()
{
  int t=1;
  cin>>t;
  while(t--)
  {
    ll n,m,x;
    cin>>n; 
    if(n<9){cout<<"0"<<endl;continue;}
    else if(n<10){cout<<"1"<<endl;continue;}
    x=((n-9)/10);
    cout<<x+1<<endl;
 
  }
  return 0;
}