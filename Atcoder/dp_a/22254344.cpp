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
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
#endif    
    int n;
    cin>>n;
    vector<int>a(n);
    ll mini=1e18;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<pow(2,n)-1;i++){
        vector<ll>b;
        ll total=0;
        ll cal=0;
        for(int j=0;j<n;j++){
            total=total|a[j];
            if(i&(1<<j)){
                cal=cal^total;
                total=0;
            }
        }
        if(total) cal=cal^total;
        
        
        mini=min(mini,cal);
    }
    cout<<mini;
}