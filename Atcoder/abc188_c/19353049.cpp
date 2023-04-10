#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int main()
{
	///"In the name of Allah,most gracious and most merciful"///


	ll i, j, x, y, z, count = 0, sum = 0, n, m;
	cin >> n;
	x = pow(2, n);
	vector<ll>a(x);
	vector<pair<ll, ll> >v, v1, v2;
	for (ll i = 0; i < x; i++)
	{
		cin >> a[i];
		v.pb(mp(a[i], i + 1));
	}
	if (n == 1) {
		if (v[0].ff > v[1].ff)
		{
			cout << v[1].ss << endl;
		}
		else
		{
			cout << v[0].ss << endl;
		}
	}
	else {
		while (1) {
			if (sum == 0) {
				for (ll i = 0; i < v.size(); i += 2)
				{
					if (v[i].ff > v[i + 1].ff)
						v1.pb(mp(v[i].ff, v[i].ss));
					else
						v1.pb(mp(v[i + 1].ff, v[i + 1].ss));
				}
				sum = 1;
			}
			else if (count == 0)
			{
				for (ll i = 0; i < v1.size(); i += 2)
				{
					if (v1[i].ff > v1[i + 1].ff)
						v2.pb(mp(v1[i].ff, v1[i].ss));
					else
						v2.pb(mp(v1[i + 1].ff, v1[i + 1].ss));
				}
				count = 1;
				v1.clear();
			}
			else if (count == 1)
			{
				for (ll i = 0; i < v2.size(); i += 2)
				{
					if (v2[i].ff > v2[i + 1].ff)
						v1.pb(mp(v2[i].ff, v2[i].ss));
					else
						v1.pb(mp(v2[i + 1].ff, v2[i + 1].ss));
				}
				count = 0;
				v2.clear();
			}
			if (v1.size() == 2 || v2.size() == 2)
				break;
		}
		if (v1.size() == 2)
		{
			if (v1[0].ff > v1[1].ff)
			{
				cout << v1[1].ss << endl;
			}
			else
			{
				cout << v1[0].ss << endl;
			}
		}
		else if (v2.size() == 2)
		{
			if (v2[0].ff > v2[1].ff)
			{
				cout << v2[1].ss << endl;
			}
			else
			{
				cout << v2[0].ss << endl;
			}
		}

	}
	return 0;
}