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
   string s1,s2,s3;
   string s[10]={"A>B","A<B","A>C","A<C","C>B","C<B"};
      cin>>s1>>s2>>s3;
      vector<pair<ll,char>>vp;
          ll A=0,B=0,C=0;
          if(s1[1]=='>'){
           if(s1[0]=='A'){A++;}
           else if(s1[0]=='B'){B++;}
           else{C++;}
          }else{
            if(s1[2]=='A'){A++;}
           else if(s1[2]=='B'){B++;}
           else{C++;}
          }
      
          if(s2[1]=='>'){
           if(s2[0]=='A'){A++;}
           else if(s2[0]=='B'){B++;}
           else{C++;}
          }else{
            if(s2[2]=='A'){A++;}
           else if(s2[2]=='B'){B++;}
           else{C++;}
          } 
 
           if(s3[1]=='>'){
           if(s3[0]=='A'){A++;}
           else if(s3[0]=='B'){B++;}
           else{C++;}
          }else{
            if(s3[2]=='A'){A++;}
           else if(s3[2]=='B'){B++;}
           else{C++;}
          }
 
      vp.push_back({A,'A'});
      vp.push_back({B,'B'});
      vp.push_back({C,'C'});
      sort(rall(vp));
      if(A && B && C){
       cout<<"Impossible"<<endl;
      }else{
      for(int i=2;i>=0;i--){
         cout<<vp[i].ss;
        }cout<<endl;           
      }
 }
}