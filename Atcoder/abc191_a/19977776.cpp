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
	double x, y, n, m;
	cin >> n >> m >> x >> y;
	double z = y / n;
	if (z >= m && z <= x)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
