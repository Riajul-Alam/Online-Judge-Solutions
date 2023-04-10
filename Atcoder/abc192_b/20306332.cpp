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
	   string s;
      cin>>s;
      for(int i=0;i<s.size();i++)
      {
      	if(i%2==0)
      	{
      		if(s[i]>='a' && s[i]<='z')
      			{continue;}
      		else{c1++;break;}
      	}else{
      		if(s[i]>='A' && s[i]<='Z')
      		{
      			continue;
      		}else{c1++;break;}
      	}
      }
      if(c1){cout<<"No"<<endl;}
      else{cout<<"Yes"<<endl;}

	}
}