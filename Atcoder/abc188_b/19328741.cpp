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

	ll n, m, x, y, z, k, s1 = 0, s2 = 0, s = 0, c1 = 0, c2 = 0, ans = 0;
	cin >> n >> m;
	ll mx=max(n,m);
	ll mn=min(n,m);
	if (mx== mn)
	{
		cout << "No" << endl;
	}
	else if (mn + 3 >mx)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}


}
