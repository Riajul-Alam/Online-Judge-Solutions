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
   ll n,m,x,y,z,sum=0,c1=0,c2=0,ans=0;
   cin>>n;  string s;
      cin>>s;
      deque<char>dq;
      if(n%2){
       dq.push_back(s[0]);
      }else{
       dq.push_front(s[0]);
       c1=1;
      }
      for(int i=1;i<n;i++){
       if(c1==0){
        dq.push_front(s[i]);
        c1=1;
       }else{
            dq.push_back(s[i]);
            c1=0;
       }
      }
      while(!dq.empty()){
       cout<<dq.front();
       dq.pop_front();
      }
      cout<<endl;
 
   
 
 }
}