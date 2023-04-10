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
   sum=a[0]+a[1];
   if(m%sum==0){
    cout<<(m/sum)*2<<endl;
   }
   else if(m%sum<=a[0]){
    cout<<(m/sum)*2+1<<endl;
   }
   else{
    cout<<(m/sum)*2+2<<endl;
   }
 }
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast; 
   solve();          
}
/*3
2 4
3 7
2 6
4 2
3 11*/