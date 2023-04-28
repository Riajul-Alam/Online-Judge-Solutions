//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld; 
#define pb push_back
#define ff first
#define ss second
#define pll pair<ll,ll>

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define mem(a,b) memset(a,b,sizeof(a))
#define Find(a,x) find(all(a),x)
#define LB(a,X) lower_bound(all(a),X)-a.begin()
#define UB(a,X) upper_bound(all(a),X)-a.begin()
#define toll(a) atoll(a.c_str())
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// Grid direction array [4]
int X[4]={0,0,-1,1};
int Y[4]={1,-1,0,0};

void solve()
{
    ll n,m,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    vector<string>a(n);
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    pll source,des;
    vector<vector<ll>>vis(n+1,vector<ll>(m+1,0));
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(a[i][j]=='A'){
    			source.ff=i,source.ss=j;
    		}
    		else if(a[i][j]=='B'){
    			des.ff=i,des.ss=j;
    		}
    		else if(a[i][j]=='#'){
    			vis[i][j]=1;
    		}
    	}
    }
    queue<pll>q;
    q.push(source);
    vis[source.ff][source.ff]=1;
    ans=0;c1=0;
    vector<vector<char>>dir(n+1,vector<char>(m+1,'#'));
    while(!q.empty())
    {
    	ans++;
    	queue<pll>tmp;
    	while(!q.empty())
    	{
    		auto u=q.front();
    		q.pop();vis[u.ff][u.ss]=1;
    		for(int i=0;i<4;i++)
    		{
    			x=u.ff+X[i];y=u.ss+Y[i];
    			pll tm;tm={x,y};
    			if(x>=0 && x<n && y>=0 && y<m && vis[x][y]==0){
    				tmp.push({x,y});vis[x][y]=1;
    				if(i==0)dir[x][y]='R';
    				else if(i==1)dir[x][y]='L';
    				else if(i==2)dir[x][y]='U';
    				else if(i==3)dir[x][y]='D';
    			}
    			if(tm==des){
    				c1++;
    				break;
    			}
    		}
    		if(c1)break;
    	}
    	if(c1)break;
    	q=tmp;
    }

    if(!c1){
    	 cout<<"NO"<<endl;return;
    }
    string res;
    ll i=des.ff,j=des.ss;
    while(1)
    {
    	if(i==source.ff && j==source.ss)break;
    	if(dir[i][j]=='U'){
    		res+='U';i++;
    	}
    	else if(dir[i][j]=='D'){
    		res+='D';i--;
    	}
    	else if(dir[i][j]=='L'){
    		res+='L';j++;
    	}
    	else{
    		res+='R';j--;
    	}
    }
    reverse(all(res));
    cout<<"YES"<<endl;
    cout<<sz(res)<<endl;
    cout<<res<<endl;

}

int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast;
   //ll t;cin>>t;while(t--) 
   solve();         	
}