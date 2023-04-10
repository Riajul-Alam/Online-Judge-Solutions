
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
#define debug(x) cout<<#x<<" "<<x<<endl;
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;

/*problem-A
ll n,a[100005];
ll dp[100005]; // step -01
// Recursive solution
ll f(ll i)
{
	if(i>=n-1) return 0;
	ll ans1=INT_MAX,ans2=INT_MAX;
	if(i+1<n)
	{
		ans1=abs(a[i]-a[i+1])+f(i+1);
	}
	if(i+2<n)
	{
		ans2=abs(a[i]-a[i+2])+f(i+2);
	}
	return min(ans2,ans1);
}
ll f(ll i)
{
	if(i>=n-1) return 0;
	if(dp[i]!=-1) return dp[i];
	ll ans1=INT_MAX,ans2=INT_MAX;
	if(i+1<n)ans1=abs(a[i]-a[i+1])+f(i+1);
	if(i+2<n)ans2=abs(a[i]-a[i+2])+f(i+2);
	return dp[i]=min(ans2,ans1);
}
void solve()
{   
	mem(dp,-1);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<f(0)<<endl;

}*/

/*//Problem-B
ll n,a[100005],k;
ll dp[100005];
ll f(ll i)
{
	if(i>=n-1) return 0;
	if(dp[i]!=-1) return dp[i];
	ll ans1=INT_MAX,ans2=INT_MAX;
	for(int j=1;j<=k;j++){
       if(j+i<n)ans1=min(ans1,abs(a[i]-a[i+j])+f(i+j));
	}
	return dp[i]=ans1;
}
void solve()
{   
	mem(dp,-1);
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<f(0)<<endl;

}*/
//Problem-C

ll n,a[100005][3],k;
ll dp[100005][3];// step -01
ll f(ll day,ll flag)
{
     if(day==n) return 0;
     if(dp[day][flag]!=-1)return dp[day][flag];// Step-03    
     ll maxi=0;
     if(flag==0)
     {
     	// Flag=0 means we are in 1st index
     	//Take 1st type
        maxi=max(a[day][0]+f(day+1,1),maxi);
        //take 2nd type 
        maxi=max(a[day][1]+f(day+1,2),maxi);
        // take 3rd type
        maxi=max(a[day][2]+f(day+1,3),maxi);
     }  
     else if(flag==1)
     {
     	// flag=1 means we take 1st type, last day(index)
     	// Take 2nd type
     	maxi=max(a[day][1]+f(day+1,2),maxi);
     	//take 3rd type
     	maxi=max(a[day][2]+f(day+1,3),maxi);
     }
     else if(flag==2)
     {
     	// flag=2 means we take 2st type, last day(index)
      	//Take 1st type
      	maxi=max(a[day][0]+f(day+1,1),maxi);
      	//Take 3rd Type
     	maxi=max(a[day][2]+f(day+1,3),maxi);    	
     }
     else
     {
     	// flag=3 means we take 3rd type, last day(index)
      	//Take 2nd type
     	maxi=max(a[day][1]+f(day+1,2),maxi);
       // Take 1st type
     	maxi=max(a[day][0]+f(day+1,1),maxi);
     }
     return dp[day][flag]=maxi;
     
}


void solve()
{   
	mem(dp,-1);// step-02
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<f(0,0)<<endl;

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