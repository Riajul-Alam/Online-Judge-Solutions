//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
void solve()
{
    ll n,m,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    string s;cin>>s;
    n=sz(s);
    cin>>m;
    map<char,set<ll>>mp;
    for(int i=0;i<n;i++){
      mp[s[i]].insert(i+1);
    }
    while(m--)
    {
      ll type,l,r;char ch;
      cin>>type;
      if(type==1){
        cin>>l>>ch;
        char cur;
        cur=s[l-1];
        mp[cur].erase(l);
        mp[ch].insert(l);
        s[l-1]=ch;
      }else{
        cin>>l>>r;ans=0;
        ch='a';
        for(char ch='a';ch<='z';ch++){
          ll val=*mp[ch].lower_bound(l);
          if(val>=l && val<=r){
            ans++;
          }
        }
        cout<<ans<<endl;
      }
    }
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