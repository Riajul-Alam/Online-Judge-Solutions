//Bismillahir Rahmanir Raheem
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
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n;
      vector<char>vs[1005];
      cin.ignore();
      for(int i=0;i<n;i++)
      {
       string s;
       getline(cin,s);
       for(int j=0;j<5;j++)
       {
          vs[i].push_back(s[j]);
       }
      }
      for(int i=0;i<n;i++)
      {
       if(vs[i][0]=='O' && vs[i][1]=='O'){
        c1++;
        vs[i][0]='+';
        vs[i][1]='+';break;
       }
       if(vs[i][3]=='O' && vs[i][4]=='O'){
        c1++;
        vs[i][3]='+';
        vs[i][4]='+';break;
       }
      }
      if(c1){
       cout<<"YES"<<endl;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<5;j++)
        {
         cout<<vs[i][j];
        }
        cout<<endl;
       }
      }else{
       cout<<"NO"<<endl;
      }
 
 }
}