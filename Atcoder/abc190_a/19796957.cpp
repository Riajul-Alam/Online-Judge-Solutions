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
    ll a,b,c;
    cin>>a>>b>>c;
    if(c==0)
    {
    	if(a<=b)
    	{
    		cout<<"Aoki"<<endl;
    	}
    	else
    	{
    		cout<<"Takahashi"<<endl;
    	}
    }
    else
    {
    	if(b<=a)
    	{
    		cout<<"Takahashi"<<endl;
    	}
    	else
    	{
        cout<<"Aoki"<<endl;
    	}
    }
}