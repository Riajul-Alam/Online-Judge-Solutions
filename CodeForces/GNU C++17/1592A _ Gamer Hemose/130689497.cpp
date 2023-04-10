//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{   
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0;
   cin>>n>>m;
   vector<ll>a(n);
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   sort(rall(a));
   if(m<=a[0]){cout<<1<<endl;continue;}
    x=(a[0]+a[1]);
    y=(m/x);
    if((x*y)==m){y=y*2;}
    else if((y*x)>=m){
     if((y*x)-a[1]>=m){
      y*=2;y--;
     }
    }
    else{
     if((y*x)+a[0]>=m){
      y*=2;y++;
     }
     else{
      y*=2;y+=2;
     }
    }
    cout<<y<<endl;
 
 }
}
 
int main()
{  
   fast; 
   solve();          
}
/*3
2 4
3 7
2 6
4 2
3 11*/