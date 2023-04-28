//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
 
#define mx 200005
ll arr[mx];
ll tree[mx * 3];
void build(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int mid = (b + e) / 2;
    build(node*2, b, mid);
    build(node*2+1,mid + 1, e);
    tree[node] = tree[node*2] + tree[node*2+1];
}
ll query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)return 0; 
    if (b >= i && e <= j)return tree[node]; 
    int mid = (b + e) / 2;
    ll p1 = query(node*2, b, mid, i, j);
    ll p2 = query(node*2+1,mid+1,e,i,j);
    return p1 + p2;
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)return; 
    if (b >= i && e <= i) { 
        tree[node] = newvalue;return;
    }
    int mid = (b + e) / 2;
    update(node*2, b, mid, i, newvalue);
    update(node*2+1, mid + 1, e, i, newvalue);
    tree[node] = tree[node*2] + tree[node*2+1];
}
void solve()
{
    int n,q;
    cin >> n>>q;
    for(int i=1;i<=n;i++)cin>>arr[i];
    build(1, 1, n);
    while(q--){
      int type,val,x,y;
      cin>>type>>x>>y;
      if(type==1)
      {
         update(1, 1, n, x, y);
      }
      else{
         cout<<query(1,1,n,x,y)<<endl;
      }
    }
}
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   solve();         	
}
