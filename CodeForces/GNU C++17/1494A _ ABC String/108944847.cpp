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
string s;
bool check(char p,char q,char r){
 stack<char>st;
 ll cc1=0;
 char A=p,B=q,C=r;
      for(int i=0;i<s.size();i++){
       char temp;
       if(s[i]=='A'){temp=A;}
       else if(s[i]=='B'){temp=B;}
       else if(s[i]=='C'){temp=C;}
       if(st.empty()){
        st.push(temp);
       }
       else if(st.top()==temp){
        st.push(temp);
       }
       else if(st.top()=='(' && temp==')'){
        st.pop();
       }
       else{st.push(temp);}
      }
      if(st.size()==0){cc1++;} 
      return cc1>0;
}
int main()
{
    fast;
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,cc2=0,ans=0;
      cin>>s;
      char A='(',B=')',C=')';
      if(check(A,B,C)){cc2++;}
      A='(',B=')',C='(';
      if(check(A,B,C)){cc2++;}
      A='(',B='(',C=')';
      if(check(A,B,C)){cc2++;}   
      A=')',B='(',C='(';
      if(check(A,B,C)){cc2++;}
      A=')',B=')',C='(';
      if(check(A,B,C)){cc2++;} 
      A=')',B='(',C=')';
      if(check(A,B,C)){cc2++;}
      if(cc2){cout<<"YES"<<endl;}
      else{ cout<<"NO"<<endl;}         
 }
}