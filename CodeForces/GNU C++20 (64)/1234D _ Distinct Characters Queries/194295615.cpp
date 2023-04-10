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
 
int n, m;
const int N = 1e5 + 5;
vector<int> v(N);
struct segtree {
   vector<vector<int>> st;
   segtree(int n) {
      st.resize(4*n,vector<int>(30,0));
   }
   void build(int at, int l, int r) {
      if (l == r) {
         st[at][v[l]]=1;
         return;
      }
      int mid = (l + r) / 2;
      build(at * 2, l, mid);
      build(at * 2 + 1, mid + 1, r);
      for(int i=0;i<26;i++){
       st[at][i]= st[at * 2][i] | st[at * 2 + 1][i];
      }
   }
   void build() {
      build(1, 1, n);
   }
   void update(int at, int l, int r, int i, int val) {
      if (i > r || i < l) return;
      if (l == r) {
       for(int i=0;i<26;i++){
        st[at][i]=0;
       }
         st[at][val]=1;
         return;
      }
      int mid = (l + r) / 2;
      update(at * 2, l, mid, i, val);
      update(at * 2 + 1, mid + 1, r,  i, val);
      for(int i=0;i<26;i++){
       st[at][i]= st[at * 2][i] + st[at * 2 + 1][i];
      }
   }
   void update(int i, int val) {
      update(1, 1, n, i, val);
   }
   
   vector<int> query(int at, int l, int r, int tl, int tr) {
      if (r < tl || l > tr) return vector<int>(30, 0);
      if (l >= tl && r <= tr){
       vector<int>res(30,0);
       for(int i=0;i<26;i++){
        res[i]=st[at][i];
       }return res;
      }
      int mid = (l + r) / 2;     
      ll sm = 0;
      vector<int>t1,t2;
      t1=query(at * 2, l, mid, tl, tr);
      t2=query(at * 2 + 1, mid + 1, r, tl, tr);
      vector<int>final(30,0);
      for(int i=0;i<26;i++){
       final[i]=t2[i]|t1[i];
      }
      return final;
   }
   vector<int> query(int l, int r) {
      vector<int>res=query(1, 1, n, l, r);
      return res;
   }
};
 
void solve()
{
    ll k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    string s;cin>>s;
    n=sz(s);
    cin>>m;
    for(int i=1;i<=n;i++)v[i]=s[i-1]-'a';
    segtree sg(n+5);
    sg.build();
    while(m--)
    {
     int type,l,r;cin>>type;
     if(type==1){
      char ch;
      cin>>l>>ch;
      sg.update(l, ch-'a');
     }
     else{
      cin>>l>>r;ans=0;
      vector<int>res=sg.query(l,r);
      for(int i=0;i<sz(res);i++){
       if(res[i])ans++;
      }cout<<ans<<endl;
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