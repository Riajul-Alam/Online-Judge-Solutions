#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,c1=0,c2=0,ans=0;
   cin>>n>>m;
   if(n==m){ cout<<2<<endl;continue;}
   else if(n<m){cout<<1<<endl;continue;}
   x=n,y=m;
   ll minn=1000000;
   if(m==1){c1++;m++;}
   for(int i=m;i<=15;i++)
   {
    c2=0,x=n;
     while(x>0)
     {
      x=x/i;
      c2++;
     }
        minn=min(minn,(c1+c2));
     c1++;
   }
   if(m>15){
     while(n>0)
     {
      n=n/m;
      c2++;
     }
        minn=min(minn,c2); 
      }
      cout<<minn<<endl;
 }
 return 0;
}