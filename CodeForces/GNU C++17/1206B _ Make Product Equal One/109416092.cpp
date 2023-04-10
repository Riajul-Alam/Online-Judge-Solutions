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
   cin>>n; // string s;
      ll a[100005];
   vector<ll>v;
   ll positive=0,negative=0,zero=0;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
     if(a[i]==0){zero++;}
     else if(a[i]>0){positive++;}
     else{
      negative++;
     }
   }
   if(negative%2==0){
         for(int i=0;i<n;i++){
          if(a[i]<0){
           sum=sum+abs(a[i])-1;
          }
          else if(a[i]>0){
           sum+=a[i]-1;
          }else{
           sum+=1;
          }
         }
   }
   else if(negative%2!=0 && zero>0){
         c1=0;
         for(int i=0;i<n;i++){
          if(a[i]<0){
           sum=sum+abs(a[i])-1;
          }
          else if(a[i]>0){
           sum+=a[i]-1;
          }else{
           sum+=1;
          }
         }     
   }
   else if(negative%2!=0 && zero==0){
            negative--;
            for(int i=0;i<n;i++){
             if(negative>0 && a[i]<0){
              sum=sum+abs(a[i])-1;
                  negative--;
             }
             else if(negative==0 && a[i]<0){
              sum+=abs(a[i])+1;
             }
             else if(a[i]==0){
                      sum+=1;
             }else{
              sum+=abs(a[i])-1;
             }
            }
   }
   cout<<sum<<endl;
 
 }
}