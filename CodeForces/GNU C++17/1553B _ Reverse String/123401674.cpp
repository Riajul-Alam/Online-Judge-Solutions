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
#define eps 1e-10
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
int main()
{
     fast;
  int t=1;
  cin>>t;
  while(t--)
  {
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    string s1,s2;
    cin>>s1>>s2;
    vector<ll>v;
    n=s1.size();
    m=s2.size();
    bool ok=false;
    for(int i=0;i<n;i++)
    {
     string s3="";
     ll j=0;
              if(s1[i]==s2[0])
              {
               //s3+=s2[0];
               ll k=0,l=i;
               for(;l<n;l++)
               {
                if(s2[k]==s1[l])
                {
                 s3+=s2[k];
                 ll tm=l-1,tm2=k+1;
                 string s4="";
                 for(;tm>=0 and tm2<m;tm--)
                 {
                  if(s1[tm]==s2[tm2])
                  {
                   s4+=s2[tm2];
                   tm2++;
                  }else{break;}
                 }
                 if(s2==(s3+s4)){ok=true;break;}
                 if(k+1<m){k++;}
                 else{break;}
                }
                else{
                       l--;break;
                }
               }
               // if(l==n){l--;}
               // l--;
               // for(;l>=0;l--)
               // {
               //  if(s2[k]==s1[l])
               //  {
               //   s3+=s2[k];
               //   if(k+1<m){k++;}
               //   else{break;}
               //  }else{break;}
               // }
               //cout<<"ok "<<s3<<endl;
 
               //if(s2==s3+s4){ok=true;break;}
              }
          }
          if(ok){cout<<"YES"<<endl;}
          else{ cout<<"NO"<<endl;}
 
  }
}