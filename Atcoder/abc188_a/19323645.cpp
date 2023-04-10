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
	int t=1;
	//cin >> t;
	while (t--)
	{
		ll n, m, x, y, z, k, s1 = 0, s2 = 0, s = 0, c1 = 0, c2 = 0, ans = 0;
		cin >> n;
		vector<ll>v, v2;
		for (int i = 0; i < n; i++)
		{
			ll val; cin >> val;
			v.push_back(val);
		}
		for (int i = 0; i < n; i++)
		{
			ll val;
			cin >> val;
			v2.push_back(val);
		}
		ll sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum = sum + (v[i] * v2[i]);
		}
		if (sum == 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}

	}
}