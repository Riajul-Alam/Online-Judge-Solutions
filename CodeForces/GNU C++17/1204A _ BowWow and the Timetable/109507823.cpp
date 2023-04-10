//Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
int main()
{
 ll c1=0,n;
 string s;
 cin>>s;
 n=s.size();
 for(int i=1;i<s.size();i++){
  if(s[i]=='1'){c1++;break;}
 }
 if(c1){
  cout<<(n+1)/2<<endl;
 }else{
  if(n%2==0){
  cout<<n/2<<endl; 
  }else{
          cout<<(n-1)/2<<endl;
  }
 
 }
}