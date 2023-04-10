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
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n; 
     vector<string> inputs;//inputs(h+5)
 for(int i=0;i<n;i++) {
  string a;
  cin >> a;
  inputs.push_back(a);
  //cin>>inputs[i];
 }
 ll x1,y1,x2,y2;
 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
           if(inputs[i][j]=='*'){
            x1=i,y1=j;c1++;break;
           }
  }
  if(c1){
        break;
  }
 }
 c1=0;   
 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
   if(i==x1 && j==y1){
    continue;
   }
           if(inputs[i][j]=='*'){
            x2=i,y2=j;c1++;break;
           }
  }
  if(c1){
        break;
  }
 }
    if(x1==x2){
     if(x1+1<n){
      inputs[x1+1][y1]='*';
      inputs[x1+1][y2]='*';
     }
     else if(x1-1>=0){
      inputs[x1-1][y1]='*';
      inputs[x1-1][y2]='*';  
     }
    }
    else if(y1==y2){
     if(y1+1<n){
      inputs[x1][y1+1]='*';
      inputs[x2][y1+1]='*';
     }
     else if(y1-1>=0){
      inputs[x1][y1-1]='*';
      inputs[x2][y1-1]='*';  
     }    
    }else {
     inputs[x2][y1]='*';
     inputs[x1][y2]='*';
    }
  for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
    cout<<inputs[i][j];
   }cout<<endl;
  }
 
 }
}