//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const int MAXN = 2e5+5;
const int MAXD = 30; // ceil(log2(10^9))
 
// number of planets and queries
int n,q;
// up matrix where [i][j] corresponds to i's (2^j)th parent
int up[MAXN][MAXD];
int getDthAncestor(int a, int d) {
	for(int i=0;i<MAXD;i++){
		if(d&(1<<i)){
			a=up[a][i];
		}
	}	
	return a;
}
void solve() {
	cin>>n>>q;
	for(int i=1;i<=n;i++) {
		cin>>up[i][0];
	}
	// evaluate the up matrix
	for(int d=1;d<MAXD;d++)
	for(int i=1;i<=n;i++) {
		up[i][d]=up[up[i][d-1]][d-1];
	}
	// process queries
	while(q--) {
		int a,d;
		cin>>a>>d;
		cout<<getDthAncestor(a,d)<<endl;
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
