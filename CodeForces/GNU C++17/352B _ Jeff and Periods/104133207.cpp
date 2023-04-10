#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug cout<<"OK"<<endl;
int main()
{
 fast;
 int t=1;
 //cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, s1 = 0, s2 = 0, s = 0, c1 = 0, c2 = 0, ans = 0;
  cin >> n;
  vector<ll>vt[100005];
  set<ll>st;
  for (int i = 1; i <=n; i++)
  {
   ll val;cin>>val;
   st.insert(val);
   vt[val].push_back(i);
  }
  vector<pair<ll,ll> >vp;
  for(auto q:st)
  {
   if(vt[q].size()==1)
   {
              vp.push_back(make_pair(q,0));
             
   }
   else
     {
   x=vt[q][1]-vt[q][0];
   ll Count=0;
   for(int j=2;j<vt[q].size();j++)
   {
              if((vt[q][j]-vt[q][j-1])!=x)
              {
               Count++;
              } 
   }
   if(Count!=0)
   {
     //vp.push_back(make_pair(q,0));
   }
   else
   {
    vp.push_back(make_pair(q,x));
   }    
  }
 
  }
  cout<<vp.size()<<endl;
  for(int i=0;i<vp.size();i++)
  {
   cout<<vp[i].ff<<" "<<vp[i].ss<<endl;
  }        
       
 }
}