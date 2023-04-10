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
	int t = 1;
	//cin>>t;
	while (t--)
	{
		ll n, m, x, y, z, k, sum = 0, c1 = 0, c2 = 0, ans = 0;
		cin >> n>>k;
		ll temp=n;
		for(int i=0;i<k;i++)
		{
          temp=n;
          stringstream ss;  
          ss<<temp; 
          string s;  
          ss>>s;
          //cout<<s<<endl;
          sort(rall(s));//cout<<s<<endl;
          string s1,s2;
          s1=s;
          sort(all(s));///cout<<s<<endl;
          s2=s;
         stringstream R(s1);
         ll p;
         R>> p;  //cout<<"p ="<<p<<endl;
         stringstream Q(s2);
         ll q;
         Q>> q; //cout<<"Q ="<<q<<endl;
         ll rr=(p-q);
         //cout<<rr<<endl;
         if(rr>=0){n=rr;}
         else{break;}   
         //cout<<i<<endl;     
		}
		cout<<n<<endl;

	}  

}