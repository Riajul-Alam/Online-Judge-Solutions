#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mkp make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug cout<<"OK"<<endl;
int main()
{
    fast;
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,p1=0,p2=0,sum=0,c1=0,c2=0,ans=0;
   cin>>n;
      string s,s1="";
      cin>>s;
      x=0;
      for(int i=0;i<n;i++)
      {
       if(s[i]=='0' && x==0)
       {
        s1=s1+'1';
        x=1;
       }
       else if(s[i]=='0' && x==1)
       {
        s1=s1+'0';
        x=0;
       }
       else if(s[i]=='0' && x==2)
       {
        s1=s1+'1';x=1;
       }
       else if(s[i]=='1' && x==1)
       {
        s1=s1+'1';
        x=2;
       }
       else if(s[i]=='1' && x==2)
       {
        s1=s1+'0';x=1;
       }
       else if(s[i]=='1' && x==0)
       {
        s1=s1+'1';
        x=2;
       }
      }
     cout<<s1<<endl;
 }
}